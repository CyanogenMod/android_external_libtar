/*
**  Copyright 2002-2003 University of Illinois Board of Trustees
**  Copyright 2002-2003 Mark D. Roth
**  All rights reserved.
**
**  internal.h - internal header file for libtar
**
**  Mark D. Roth <roth@uiuc.edu>
**  Campus Information Technologies and Educational Services
**  University of Illinois at Urbana-Champaign
*/

#include <config.h>
#include <compat.h>

#include <libtar.h>

#ifdef DEBUG
#define DBGMSG(args...) fprintf(stderr, args)
#define DBGERR(s) perror(s)
#else
#define DBGMSG(args...)
#define DBGERR(s)
#endif
