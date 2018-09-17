#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){

   printf("Signed\n");
   printf("min signed char: %d\n", -(char)((unsigned char) ~0 >> 1) -1);
   printf("max signed char: %d\n", (unsigned char) ~0 >> 1);
   printf("min signed short: %d\n", -(short)((unsigned short) ~0 >> 1) -1); 
   printf("max signed short: %d\n", (unsigned short) ~0 >> 1);
   printf("min signed int: %d\n", -(int)((unsigned int) ~0 >> 1) -1); 
   printf("max signed int: %u\n", (unsigned int) ~0 >> 1);
   printf("min signed long: %li\n", -(long)((unsigned long) ~0 >> 1) -1);
   printf("max signed long: %li\n\n", (unsigned long) ~0 >> 1);

   printf("Unsigned\n");
   printf("max unsigned char %d\n", (unsigned char) ~0 );
   printf("max unsigned short: %d\n", (unsigned short) ~0);
   printf("max unsigned int: %u\n", (unsigned int) ~0 );
   printf("max unsigned long: %lu\n", (unsigned long) ~0 );

   return 0;

}

