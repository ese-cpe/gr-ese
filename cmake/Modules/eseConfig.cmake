INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_ESE ese)

FIND_PATH(
    ESE_INCLUDE_DIRS
    NAMES ese/api.h
    HINTS $ENV{ESE_DIR}/include
        ${PC_ESE_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    ESE_LIBRARIES
    NAMES gnuradio-ese
    HINTS $ENV{ESE_DIR}/lib
        ${PC_ESE_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(ESE DEFAULT_MSG ESE_LIBRARIES ESE_INCLUDE_DIRS)
MARK_AS_ADVANCED(ESE_LIBRARIES ESE_INCLUDE_DIRS)

