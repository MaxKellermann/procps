#ifndef PROCPS_PROC_ESCAPE_H
#define PROCPS_PROC_ESCAPE_H

#include "readproc.h"

#define ESC_ARGS     0x1  // try to use cmdline instead of cmd
#define ESC_BRACKETS 0x2  // if using cmd, put '[' and ']' around it
#define ESC_DEFUNCT  0x4  // mark zombies with " <defunct>"

int escape_command (char *outbuf, const proc_t *pp, int bytes, int *cells, unsigned flags);

int escape_str (char *dst, const char *src, int bufsize, int *maxcells);

#endif
