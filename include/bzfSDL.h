/* bzflag
 * Copyright (c) 1993-2023 Tim Riker
 *
 * This package is free software;  you can redistribute it and/or
 * modify it under the terms of the license found in the file
 * named COPYING that should have accompanied this file.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __BZFSDL_H__
#define __BZFSDL_H__

/** this file contains headers necessary for SDL */

#ifdef HAVE_SDL2_SDL_H
#  include <SDL2/SDL.h>
#  include <SDL2/SDL_thread.h>
#  include <SDL2/SDL_stdinc.h>
#else // autotools adds an SDL-specific include path
#  include "SDL.h"
#  include "SDL_thread.h"
#  include "SDL_stdinc.h"
#endif //HAVE_SDL_SDL_H

#endif /* __BZFSDL_H__ */

// Local Variables: ***
// mode: C++ ***
// tab-width: 4 ***
// c-basic-offset: 4 ***
// indent-tabs-mode: nil ***
// End: ***
// ex: shiftwidth=4 tabstop=4
