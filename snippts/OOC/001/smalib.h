#ifndef	SMALIB_H // no matter how many times we include Set.h, the C compiler only sees the declarations once.
#define	SMALIB_H

extern const void* Smalib;

void* smalib_new(const void* smalib);
void* smalib_delete(const void* smalib);

#endif
