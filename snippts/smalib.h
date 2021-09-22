#ifndef SMALIB_H
#define SMALIB_H
// ----------------------------------------------------------------------------

#ifdef DEBUG
   #define ERR(msg) \
      printf("%s:Error file %s at line %i\n", #msg, __FILE__, __LINE__)
#endif


void hi(void) {
   puts("hi soso");
}
// ----------------------------------------------------------------------------
#endif
