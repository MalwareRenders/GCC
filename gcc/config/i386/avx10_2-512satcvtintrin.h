/* Copyright (C) 2024-2025 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _IMMINTRIN_H_INCLUDED
#error "Never use <avx10_2-512satcvtintrin.h> directly; include <immintrin.h> instead."
#endif

#ifndef _AVX10_2_512SATCVTINTRIN_H_INCLUDED
#define _AVX10_2_512SATCVTINTRIN_H_INCLUDED

#if !defined (__AVX10_2_512__)
#pragma GCC push_options
#pragma GCC target("avx10.2-512")
#define __DISABLE_AVX10_2_512__
#endif /* __AVX10_2_512__ */

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtbf16_epi16 (__m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvtbf162ibs512_mask ((__v32bf) __A,
						  (__v32hi)
						  _mm512_undefined_si512 (),
						  (__mmask32) -1);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtbf16_epi16 (__m512i __W, __mmask32 __U, __m512bh __A)
{
  return (__m512i) __builtin_ia32_cvtbf162ibs512_mask ((__v32bf) __A,
						       (__v32hi) __W,
						       (__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtbf16_epi16 (__mmask32 __U, __m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvtbf162ibs512_mask ((__v32bf) __A,
						  (__v32hi)
						  _mm512_setzero_si512 (),
						  (__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtbf16_epu16 (__m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvtbf162iubs512_mask ((__v32bf) __A,
						   (__v32hi)
						   _mm512_undefined_si512 (),
						   (__mmask32) -1);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtbf16_epu16 (__m512i __W, __mmask32 __U, __m512bh __A)
{
  return (__m512i) __builtin_ia32_cvtbf162iubs512_mask ((__v32bf) __A,
							(__v32hi) __W,
							(__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtbf16_epu16 (__mmask32 __U, __m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvtbf162iubs512_mask ((__v32bf) __A,
						   (__v32hi)
						   _mm512_setzero_si512 (),
						   (__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvttbf16_epi16 (__m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvttbf162ibs512_mask ((__v32bf) __A,
						   (__v32hi)
						   _mm512_undefined_si512 (),
						   (__mmask32) -1);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvttbf16_epi16 (__m512i __W, __mmask32 __U, __m512bh __A)
{
  return (__m512i) __builtin_ia32_cvttbf162ibs512_mask ((__v32bf) __A,
							(__v32hi) __W,
							(__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvttbf16_epi16 (__mmask32 __U, __m512bh __A)
{
  return
    (__m512i) __builtin_ia32_cvttbf162ibs512_mask ((__v32bf) __A,
						   (__v32hi)
						   _mm512_setzero_si512 (),
						   (__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvttbf16_epu16 (__m512bh __A)
{
  return (__m512i)
    __builtin_ia32_cvttbf162iubs512_mask ((__v32bf) __A,
					  (__v32hi) _mm512_undefined_si512 (),
					  (__mmask32) -1);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvttbf16_epu16 (__m512i __W, __mmask32 __U, __m512bh __A)
{
  return (__m512i) __builtin_ia32_cvttbf162iubs512_mask ((__v32bf) __A,
							 (__v32hi) __W,
							 (__mmask32) __U);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvttbf16_epu16 (__mmask32 __U, __m512bh __A)
{
  return (__m512i)
    __builtin_ia32_cvttbf162iubs512_mask ((__v32bf) __A,
					  (__v32hi)
					  _mm512_setzero_si512 (),
					  (__mmask32) __U);
}

#ifdef __OPTIMIZE__
extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvt_roundph_epi16 (__m512h __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) __A,
						      (__v32hi)
						      _mm512_undefined_si512 (),
						      (__mmask32) -1,
						      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvt_roundph_epi16 (__m512i __W, __mmask32 __U, __m512h __A,
			     const int __R)
{
  return (__m512i) __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) __A,
							   (__v32hi) __W,
							   (__mmask32) __U,
							   __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvt_roundph_epi16 (__mmask32 __U, __m512h __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) __A,
						      (__v32hi)
						      _mm512_setzero_si512 (),
						      (__mmask32) __U,
						      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvt_roundph_epu16 (__m512h __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) __A,
						       (__v32hi)
						       _mm512_undefined_si512 (),
						       (__mmask32) -1,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvt_roundph_epu16 (__m512i __W, __mmask32 __U, __m512h __A,
			      const int __R)
{
  return (__m512i) __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) __A,
							    (__v32hi) __W,
							    (__mmask32) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvt_roundph_epu16 (__mmask32 __U, __m512h __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) __A,
						       (__v32hi)
						       _mm512_setzero_si512 (),
						       (__mmask32) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvt_roundps_epi32 (__m512 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) __A,
						      (__v16si)
						      _mm512_undefined_si512 (),
						      (__mmask16) -1,
						      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvt_roundps_epi32 (__m512i __W, __mmask16 __U, __m512 __A,
			     const int __R)
{
  return (__m512i) __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) __A,
							   (__v16si) __W,
							   (__mmask16) __U,
							   __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvt_roundps_epi32 (__mmask16 __U, __m512 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) __A,
						      (__v16si)
						      _mm512_setzero_si512 (),
						      (__mmask16) __U,
						      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvt_roundps_epu32 (__m512 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) __A,
						       (__v16si)
						       _mm512_undefined_si512 (),
						       (__mmask16) -1,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvt_roundps_epu32 (__m512i __W, __mmask16 __U, __m512 __A,
			      const int __R)
{
  return (__m512i) __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) __A,
							    (__v16si) __W,
							    (__mmask16) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvt_roundps_epu32 (__mmask16 __U, __m512 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) __A,
						       (__v16si)
						       _mm512_setzero_si512 (),
						       (__mmask16) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtt_roundph_epi16 (__m512h __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) __A,
					     (__v32hi)
					     _mm512_undefined_si512 (),
					     (__mmask32) -1,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtt_roundph_epi16 (__m512i __W, __mmask32 __U, __m512h __A,
			      const int __R)
{
  return (__m512i) __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) __A,
							    (__v32hi) __W,
							    (__mmask32) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtt_roundph_epi16 (__mmask32 __U, __m512h __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) __A,
						       (__v32hi)
						       _mm512_setzero_si512 (),
						       (__mmask32) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtt_roundph_epu16 (__m512h __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) __A,
					      (__v32hi)
					      _mm512_undefined_si512 (),
					      (__mmask32) -1,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtt_roundph_epu16 (__m512i __W, __mmask32 __U, __m512h __A,
			       const int __R)
{
  return (__m512i) __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) __A,
							     (__v32hi) __W,
							     (__mmask32) __U,
							     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtt_roundph_epu16 (__mmask32 __U, __m512h __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) __A,
					      (__v32hi)
					      _mm512_setzero_si512 (),
					      (__mmask32) __U,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtt_roundps_epi32 (__m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) __A,
					     (__v16si)
					     _mm512_undefined_si512 (),
					     (__mmask16) -1,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtt_roundps_epi32 (__m512i __W, __mmask16 __U, __m512 __A,
			      const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) __A,
							    (__v16si) __W,
							    (__mmask16) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtt_roundps_epi32 (__mmask16 __U, __m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) __A,
					     (__v16si)
					     _mm512_setzero_si512 (),
					     (__mmask16) __U,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_ipcvtt_roundps_epu32 (__m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) __A,
					      (__v16si)
					      _mm512_undefined_si512 (),
					      (__mmask16) -1,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_ipcvtt_roundps_epu32 (__m512i __W, __mmask16 __U, __m512 __A,
			       const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) __A,
							     (__v16si) __W,
							     (__mmask16) __U,
							     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_ipcvtt_roundps_epu32 (__mmask16 __U, __m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) __A,
					      (__v16si)
					      _mm512_setzero_si512 (),
					      (__mmask16) __U,
					      __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundpd_epi32 (__m512d __A, const int __R)
{
  return (__m256i)
    __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) __A,
					     (__v8si)
					     _mm256_undefined_si256 (),
					     (__mmask8) -1,
					     __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundpd_epi32 (__m256i __W, __mmask8 __U, __m512d __A,
				const int __R)
{
  return (__m256i) __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) __A,
							    (__v8si) __W,
							    (__mmask8) __U,
							    __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundpd_epi32 (__mmask8 __U, __m512d __A, const int __R)
{
  return
    (__m256i) __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) __A,
						       (__v8si)
						       _mm256_setzero_si256 (),
						       (__mmask8) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundpd_epi64 (__m512d __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) __A,
					     (__v8di)
					     _mm512_undefined_si512 (),
					     (__mmask8) -1,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundpd_epi64 (__m512i __W, __mmask8 __U, __m512d __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) __A,
							    (__v8di) __W,
							    (__mmask8) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundpd_epi64 (__mmask8 __U, __m512d __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) __A,
						       (__v8di)
						       _mm512_setzero_si512 (),
						       (__mmask8) __U,
						       __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundpd_epu32 (__m512d __A, const int __R)
{
  return (__m256i)
    __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) __A,
					      (__v8si)
					      _mm256_undefined_si256 (),
					      (__mmask8) -1,
					      __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundpd_epu32 (__m256i __W, __mmask8 __U, __m512d __A,
				const int __R)
{
  return (__m256i) __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) __A,
							     (__v8si) __W,
							     (__mmask8) __U,
							     __R);
}

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundpd_epu32 (__mmask8 __U, __m512d __A, const int __R)
{
  return
    (__m256i) __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) __A,
							(__v8si)
							_mm256_setzero_si256 (),
							(__mmask8) __U,
							__R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundpd_epu64 (__m512d __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) __A,
					      (__v8di)
					      _mm512_undefined_si512 (),
					      (__mmask8) -1,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundpd_epu64 (__m512i __W, __mmask8 __U, __m512d __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) __A,
							     (__v8di) __W,
							     (__mmask8) __U,
							     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundpd_epu64 (__mmask8 __U, __m512d __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) __A,
					      (__v8di)
					      _mm512_setzero_si512 (),
					      (__mmask8) __U,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundps_epi32 (__m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) __A,
					     (__v16si)
					     _mm512_undefined_si512 (),
					     (__mmask16) -1,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundps_epi32 (__m512i __W, __mmask16 __U, __m512 __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) __A,
							    (__v16si) __W,
							    (__mmask16) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundps_epi32 (__mmask16 __U, __m512 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) __A,
						       (__v16si)
						       _mm512_setzero_si512 (),
						       (__mmask16) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundps_epi64 (__m256 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) __A,
					     (__v8di)
					     _mm512_undefined_si512 (),
					     (__mmask8) -1,
					     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundps_epi64 (__m512i __W, __mmask8 __U, __m256 __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) __A,
							    (__v8di) __W,
							    (__mmask8) __U,
							    __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundps_epi64 (__mmask8 __U, __m256 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) __A,
						       (__v8di)
						       _mm512_setzero_si512 (),
						       (__mmask8) __U,
						       __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundps_epu32 (__m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) __A,
					      (__v16si)
					      _mm512_undefined_si512 (),
					      (__mmask16) -1,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundps_epu32 (__m512i __W, __mmask16 __U, __m512 __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) __A,
							     (__v16si) __W,
							     (__mmask16) __U,
							     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundps_epu32 (__mmask16 __U, __m512 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) __A,
					      (__v16si)
					      _mm512_setzero_si512 (),
					      (__mmask16) __U,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_cvtts_roundps_epu64 (__m256 __A, const int __R)
{
  return (__m512i)
    __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) __A,
					      (__v8di)
					      _mm512_undefined_si512 (),
					      (__mmask8) -1,
					      __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_mask_cvtts_roundps_epu64 (__m512i __W, __mmask8 __U, __m256 __A,
				const int __R)
{
  return (__m512i) __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) __A,
							     (__v8di) __W,
							     (__mmask8) __U,
							     __R);
}

extern __inline __m512i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm512_maskz_cvtts_roundps_epu64 (__mmask8 __U, __m256 __A, const int __R)
{
  return
    (__m512i) __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) __A,
							(__v8di)
							_mm512_setzero_si512 (),
							(__mmask8) __U,
							__R);
}
#else
#define _mm512_ipcvt_roundph_epi16(A, R) \
  ((__m512i) \
   __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) (A), \
					   (__v32hi) \
					   (_mm512_undefined_si512 ()), \
					   (__mmask32) (-1), \
					   (R)))

#define _mm512_mask_ipcvt_roundph_epi16(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) (A), \
						     (__v32hi) (W), \
						     (__mmask32) (U), \
						     (R)))

#define _mm512_maskz_ipcvt_roundph_epi16(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvtph2ibs512_mask_round ((__v32hf) (A), \
					   (__v32hi) \
					   (_mm512_setzero_si512 ()), \
					   (__mmask32) (U), \
					   (R)))

#define _mm512_ipcvt_roundph_epu16(A, R) \
  ((__m512i) \
   __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) (A), \
					    (__v32hi) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask32) (-1), \
					    (R)))

#define _mm512_mask_ipcvt_roundph_epu16(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) (A), \
						      (__v32hi) (W), \
						      (__mmask32) (U), \
						      (R)))

#define _mm512_maskz_ipcvt_roundph_epu16(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvtph2iubs512_mask_round ((__v32hf) (A), \
					    (__v32hi) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask32) (U), \
					    (R)))

#define _mm512_ipcvt_roundps_epi32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) (A), \
					   (__v16si) \
					   (_mm512_undefined_si512 ()), \
					   (__mmask16) (-1), \
					   (R)))

#define _mm512_mask_ipcvt_roundps_epi32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) (A), \
						     (__v16si) (W), \
						     (__mmask16) (U), \
						     (R)))

#define _mm512_maskz_ipcvt_roundps_epi32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvtps2ibs512_mask_round ((__v16sf) (A), \
					   (__v16si) \
					   (_mm512_setzero_si512 ()), \
					   (__mmask16) (U), \
					   (R)))

#define _mm512_ipcvt_roundps_epu32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask16) (-1), \
					    (R)))

#define _mm512_mask_ipcvt_roundps_epu32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) (A), \
						      (__v16si) (W), \
						      (__mmask16) (U), \
						      (R)))

#define _mm512_maskz_ipcvt_roundps_epu32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvtps2iubs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask16) (U), \
					    (R)))

#define _mm512_ipcvtt_roundph_epi16(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) (A), \
					    (__v32hi) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask32) (-1), \
					    (R)))

#define _mm512_mask_ipcvtt_roundph_epi16(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) (A), \
						      (__v32hi) (W), \
						      (__mmask32) (U), \
						      (R)))

#define _mm512_maskz_ipcvtt_roundph_epi16(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttph2ibs512_mask_round ((__v32hf) (A), \
					    (__v32hi) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask32) (U), \
					    (R)))

#define _mm512_ipcvtt_roundph_epu16(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) (A), \
					     (__v32hi) \
					     (_mm512_undefined_si512 ()), \
					     (__mmask32) (-1), \
					     (R)))

#define _mm512_mask_ipcvtt_roundph_epu16(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) (A), \
						       (__v32hi) (W), \
						       (__mmask32) (U), \
						       (R)))

#define _mm512_maskz_ipcvtt_roundph_epu16(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttph2iubs512_mask_round ((__v32hf) (A), \
					     (__v32hi) \
					     (_mm512_setzero_si512 ()), \
					     (__mmask32) (U), \
					     (R)))

#define _mm512_ipcvtt_roundps_epi32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask16) (-1), \
					    (R)))

#define _mm512_mask_ipcvtt_roundps_epi32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) (A), \
						      (__v16si) (W), \
						      (__mmask16) (U), \
						      (R)))

#define _mm512_maskz_ipcvtt_roundps_epi32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2ibs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask16) (U), \
					    (R)))

#define _mm512_ipcvtt_roundps_epu32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) (A), \
					     (__v16si) \
					     (_mm512_undefined_si512 ()), \
					     (__mmask16) (-1), \
					     (R)))

#define _mm512_mask_ipcvtt_roundps_epu32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) (A), \
						       (__v16si) (W), \
						       (__mmask16) (U), \
						       (R)))

#define _mm512_maskz_ipcvtt_roundps_epu32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2iubs512_mask_round ((__v16sf) (A), \
					     (__v16si) \
					     (_mm512_setzero_si512 ()), \
					     (__mmask16) (U), \
					     (R)))

#define _mm512_cvtts_roundpd_epi32(A, R) \
  ((__m256i) \
   __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) (A), \
					    (__v8si) \
					    (_mm256_undefined_si256 ()), \
					    (__mmask8) (-1), \
					    (R)))

#define _mm512_mask_cvtts_roundpd_epi32(W, U, A, R) \
  ((__m256i) __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) (A), \
						      (__v8si) (W), \
						      (__mmask8) (U), \
						      (R)))

#define _mm512_maskz_cvtts_roundpd_epi32(U, A, R) \
  ((__m256i) \
   __builtin_ia32_cvttpd2dqs512_mask_round ((__v8df) (A), \
					    (__v8si) \
					    (_mm256_setzero_si256 ()), \
					    (__mmask8) (U), \
					    (R)))

#define _mm512_cvtts_roundpd_epi64(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) (A), \
					    (__v8di) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask8) (-1), \
					    (R)))

#define _mm512_mask_cvtts_roundpd_epi64(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) (A), \
						      (__v8di) (W), \
						      (__mmask8) (U), \
						      (R)))

#define _mm512_maskz_cvtts_roundpd_epi64(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttpd2qqs512_mask_round ((__v8df) (A), \
					    (__v8di) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask8) (U), \
					    (R)))

#define _mm512_cvtts_roundpd_epu32(A, R) \
  ((__m256i) \
   __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) (A), \
					     (__v8si) \
					     (_mm256_undefined_si256 ()), \
					     (__mmask8) (-1), \
					     (R)))

#define _mm512_mask_cvtts_roundpd_epu32(W, U, A, R) \
  ((__m256i) __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) (A), \
						       (__v8si) (W), \
						       (__mmask8) (U), \
						       (R)))

#define _mm512_maskz_cvtts_roundpd_epu32(U, A, R) \
  ((__m256i) \
   __builtin_ia32_cvttpd2udqs512_mask_round ((__v8df) (A), \
					     (__v8si) \
					     (_mm256_setzero_si256 ()), \
					     (__mmask8) (U), \
					     (R)))

#define _mm512_cvtts_roundpd_epu64(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) (A), \
					     (__v8di) \
					     (_mm512_undefined_si512 ()), \
					     (__mmask8) (-1), \
					     (R)))

#define _mm512_mask_cvtts_roundpd_epu64(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) (A), \
						       (__v8di) (W), \
						       (__mmask8) (U), \
						       (R)))

#define _mm512_maskz_cvtts_roundpd_epu64(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttpd2uqqs512_mask_round ((__v8df) (A), \
					     (__v8di) \
					     (_mm512_setzero_si512 ()), \
					     (__mmask8) (U), \
					     (R)))

#define _mm512_cvtts_roundps_epi32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask16) (-1), \
					    (R)))

#define _mm512_mask_cvtts_roundps_epi32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) (A), \
						      (__v16si) (W), \
						      (__mmask16) (U), \
						      (R)))

#define _mm512_maskz_cvtts_roundps_epi32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2dqs512_mask_round ((__v16sf) (A), \
					    (__v16si) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask16) (U), \
					    (R)))

#define _mm512_cvtts_roundps_epi64(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) (A), \
					    (__v8di) \
					    (_mm512_undefined_si512 ()), \
					    (__mmask8) (-1), \
					    (R)))

#define _mm512_mask_cvtts_roundps_epi64(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) (A), \
						      (__v8di) (W), \
						      (__mmask8) (U), \
						      (R)))

#define _mm512_maskz_cvtts_roundps_epi64(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2qqs512_mask_round ((__v8sf) (A), \
					    (__v8di) \
					    (_mm512_setzero_si512 ()), \
					    (__mmask8) (U), \
					    (R)))

#define _mm512_cvtts_roundps_epu32(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) (A), \
					     (__v16si) \
					     (_mm512_undefined_si512 ()), \
					     (__mmask16) (-1), \
					     (R)))

#define _mm512_mask_cvtts_roundps_epu32(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) (A), \
						       (__v16si) (W), \
						       (__mmask16) (U), \
						       (R)))

#define _mm512_maskz_cvtts_roundps_epu32(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2udqs512_mask_round ((__v16sf) (A), \
					     (__v16si) \
					     (_mm512_setzero_si512 ()), \
					     (__mmask16) (U), \
					     (R)))

#define _mm512_cvtts_roundps_epu64(A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) (A), \
					     (__v8di) \
					     (_mm512_undefined_si512 ()), \
					     (__mmask8) (-1), \
					     (R)))

#define _mm512_mask_cvtts_roundps_epu64(W, U, A, R) \
  ((__m512i) __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) (A), \
						       (__v8di) (W), \
						       (__mmask8) (U), \
						       (R)))

#define _mm512_maskz_cvtts_roundps_epu64(U, A, R) \
  ((__m512i) \
   __builtin_ia32_cvttps2uqqs512_mask_round ((__v8sf) (A), \
					     (__v8di) \
					     (_mm512_setzero_si512 ()), \
					     (__mmask8) (U), \
					     (R)))
#endif

#ifdef __DISABLE_AVX10_2_512__
#undef __DISABLE_AVX10_2_512__
#pragma GCC pop_options
#endif /* __DISABLE_AVX10_2_512__ */

#endif /* _AVX10_2_512SATCVTINTRIN_H_INCLUDED */
