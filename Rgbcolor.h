/////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2000 by Michel Wassink
// All rights reserved
//
// This is free software.
// You may redistribute it by any means providing it is not sold for profit
// without the author written consent.
//
// No warrantee of any kind, expressed or implied, is included with this
// software; use at your own risk, responsibility for damages (if any) to
// anyone resulting from the use of this software rests entirely with the
// user.
//
// Send bug reports, bug fixes, enhancements, requests, flames, etc., and
// I'll try to keep a version up to date.  I can be reached as follows:
//    mwassink@csi.com				  (private site)
/////////////////////////////////////////////////////////////////////////////

#ifndef __RGBCOLOR_H__
#define __RGBCOLOR_H__

#if __cplusplus >= 201703L
#define _CONSTEXPR constexpr
#else
#define _CONSTEXPR const
#endif

_CONSTEXPR COLORREF BLACK = RGB(000, 000, 000);
_CONSTEXPR COLORREF DARKBLUE = RGB(000, 000, 128);
_CONSTEXPR COLORREF DARKGREEN = RGB(000, 064, 000);
_CONSTEXPR COLORREF DARKCYAN = RGB(000, 064, 064);
_CONSTEXPR COLORREF DARKRED = RGB(064, 000, 000);
_CONSTEXPR COLORREF DARKMAGENTA = RGB(128, 000, 128);
_CONSTEXPR COLORREF BROWN = RGB(128, 128, 000);
_CONSTEXPR COLORREF DARKGRAY = RGB(128, 128, 128);

_CONSTEXPR COLORREF LIGHTGRAY = RGB(192, 192, 192);
_CONSTEXPR COLORREF LIGHTBLUE = RGB(000, 000, 255);
_CONSTEXPR COLORREF LIGHTGREEN = RGB(000, 255, 000);
_CONSTEXPR COLORREF LIGHTCYAN = RGB(000, 255, 255);
_CONSTEXPR COLORREF LIGHTRED = RGB(255, 000, 000);
_CONSTEXPR COLORREF LIGHTMAGENTA = RGB(255, 000, 255);
_CONSTEXPR COLORREF YELLOW = RGB(255, 255, 000);
_CONSTEXPR COLORREF WHITE = RGB(255, 255, 255);

#endif	// __RGBCOLOR_H__
