/**
 ** BCC2GRX  -  Interfacing Borland based graphics programs to LIBGRX
 ** Copyright (C) 1993-97 by Hartmut Schirmer
 **
 **
 ** Contact :                Hartmut Schirmer
 **                          Feldstrasse 118
 **                  D-24105 Kiel
 **                          Germany
 **
 ** e-mail : hsc@techfak.uni-kiel.de
 **
 ** This file is part of the GRX graphics library.
 **
 ** The GRX graphics library is free software; you can redistribute it
 ** and/or modify it under some conditions; see the "copying.grx" file
 ** for details.
 **
 ** This library is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 **
 **/

#include "bccgrx00.h"

/* ----------------------------------------------------------------- */
unsigned imagesize(int left, int top, int right, int bottom)
{
  unsigned result;
  int w, h;

  _DO_INIT_CHECK_RV(0);
  w = __ABS(right-left)+1;
  h = __ABS(bottom-top)+1;
  result = GrContextSize( w, h);
  if (result == 0)
    return 0;
  return  result + IMAGE_CONTEXT_SIZE;
}

