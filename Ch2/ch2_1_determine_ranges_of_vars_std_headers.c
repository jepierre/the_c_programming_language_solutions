#include <stdio.h>
#include <limits.h>
#include <float.h>


main(){

   printf("Signed Values\n");
   printf("min signed char: %d\n", CHAR_MIN);
   printf("max signed char: %d\n", CHAR_MAX);
   printf("min signed short: %d\n", SHRT_MIN);
   printf("max signed short: %d\n", SHRT_MAX);
   printf("min signed int: %d\n", INT_MIN);
   printf("max signed int: %d\n", INT_MAX);
   printf("min signed long: %ld\n", LONG_MIN);
   printf("max signed long: %ld\n\n", LONG_MAX);

   printf("Unsigned\n");
   printf("max unsigned char: %d\n", UCHAR_MAX);
   printf("max unsigned short: %d\n", USHRT_MAX);
   printf("max unsigned int: %ld\n", UINT_MAX);
   printf("max unsigned long: %lu\n", ULONG_MAX);

   return 0;

}

