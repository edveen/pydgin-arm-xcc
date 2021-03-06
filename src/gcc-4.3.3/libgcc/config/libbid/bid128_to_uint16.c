/* Copyright (C) 2007  Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA.  */

#include "bid_internal.h"

#define SIZE_MASK      0xffff0000
#define INVALID_RESULT 0x8000

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_rnint,
				UINT128, x, bid128_to_uint32_rnint,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_xrnint,
				UINT128, x, bid128_to_uint32_xrnint,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_rninta,
				UINT128, x, bid128_to_uint32_rninta,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short,
				bid128_to_uint16_xrninta, UINT128, x,
				bid128_to_uint32_xrninta, unsigned int,
				SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_int,
				UINT128, x, bid128_to_uint32_int,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_xint,
				UINT128, x, bid128_to_uint32_xint,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_floor,
				UINT128, x, bid128_to_uint32_floor,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_ceil,
				UINT128, x, bid128_to_uint32_ceil,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_xfloor,
				UINT128, x, bid128_to_uint32_xfloor,
				unsigned int, SIZE_MASK, INVALID_RESULT)

BID_TO_SMALL_UINT_CVT_FUNCTION (unsigned short, bid128_to_uint16_xceil,
				UINT128, x, bid128_to_uint32_xceil,
				unsigned int, SIZE_MASK, INVALID_RESULT)
