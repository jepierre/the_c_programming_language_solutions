#include <stdio.h>

#define LOWER 0   // lower limit of table 
#define UPPER 300 // upper limit 
#define STEP 20   // step size

float ftoc(int f);

/* print Fahrenheit-Celsius table */
int main()
{
   int fahr;
   //print normal
   for (fahr =LOWER; fahr <= UPPER; fahr = fahr + STEP)
      printf("%3d %6.1f\n", fahr, ftoc(fahr));

   printf("\n");
   //print reverse order
   for (fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP)
      printf("%3d %6.1f\n", fahr, ftoc(fahr)); 

   return 0;
}

/* converts fahreinheit to celcius */
float ftoc(int f)
{
  return (5.0/9.0)*(f - 32);
}


