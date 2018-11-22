/* -*- c++ -*- */

#define ESE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "ese_swig_doc.i"

%{
#include "ese/square.h"
%}

%include "ese/square.h"
GR_SWIG_BLOCK_MAGIC2(ese, square);
