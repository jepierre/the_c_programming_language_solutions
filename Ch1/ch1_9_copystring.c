#include <stdio.h>
#include <stdbool.h>

/* count characters in input */
int main()
{
   int c, blanks;

   bool bl =false; //blanks

   /* trigger EOF with CTRL + D*/
   while((c = getchar()) != EOF)
   {
      if(c == ' '){
         bl = true;
         ++blanks;
      }
      else{
         if(bl == true){
            putchar(32);
            bl = false;
         }
         putchar(c);
      }
   }

   printf("#blanks:%d\n", blanks);
}


