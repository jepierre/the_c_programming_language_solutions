#include <stdio.h>

#define LOWER 0   // lower limit of table 
#define UPPER 300 // upper limit 
#define STEP 20   // step size

float ftoc(int f);
void print_heading(void);

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version
 */
int main()
{
   int fahr;
   fahr = LOWER;
   print_heading();
   while (fahr <= UPPER){
      float celcius = ftoc(fahr);
      printf("%3.0f\t%6.1f\n",(float)fahr, celcius);
      fahr += STEP;
   }
}

/* converts fahreinheit to celcius */
float ftoc(int f)
{
  return (5.0/9.0)*(f - 32);
}

void print_heading(void){
   printf("FAHRENHEIT TO CELCIUS TABLE\n");
   printf("F\tC\n");
}


