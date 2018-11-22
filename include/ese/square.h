/* -*- c++ -*- */
/* 
 * Copyright 2018 AM-CPE.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_ESE_SQUARE_H
#define INCLUDED_ESE_SQUARE_H

#include <ese/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace ese {

    /*!
     * \brief <+description of block+>
     * \ingroup ese
     *
     */
    class ESE_API square : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<square> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ese::square.
       *
       * To avoid accidental use of raw pointers, ese::square's
       * constructor is in a private implementation
       * class. ese::square::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace ese
} // namespace gr

#endif /* INCLUDED_ESE_SQUARE_H */

