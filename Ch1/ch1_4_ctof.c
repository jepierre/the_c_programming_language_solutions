#include <stdio.h>

// for fahrenheit table
#define LOWER 0   // lower limit of table 
#define UPPER 300 // upper limit 
#define STEP 20   // step size

// for celcius table
#define CUPPER 100 //uppper limit for celcius table
#define CSTEP 5 // step size for celcius table


float ctof(int f);

/* print Celsius-Fahrenheit table */
int main()
{
   int cels = LOWER;
   while (cels <= CUPPER){
      printf("%3d %6.1f\n", cels, ctof(cels)); 
      cels += CSTEP;
   }

   return 0;
}

/* converts celcius to fahreinheit */
float ctof(int c)
{
  return c*(9.0/5.0) + 32.0;
}


