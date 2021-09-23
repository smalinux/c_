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

/*
 * arrLen(arr)
 *
 * get array length
 * Ref: https://stackoverflow.com/a/37539/5688267
 */
#define arrLen(arr) sizeof(arr)/sizeof(arr[0])

#endif
