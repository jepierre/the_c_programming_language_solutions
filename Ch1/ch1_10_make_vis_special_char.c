#include <stdio.h>

/* replace each tab with \t, each backspace with \b, and each backlash with \\ */

int main()
{
   int c, t, bs;

   t = 0; //tabs
   bs =0; //backspace

   /* trigger EOF with CTRL + D*/
   while((c = getchar()) != EOF)
   {
      if (c == '\t'){
         ++t;
         putchar('\\');
         putchar('\\t');
      }
      else if (c=='\b'){
         ++bs; 
         putchar('\\');
         putchar('\\b');
      }
      else if (c==127 || c == 8){
         ++bs; 
         putchar('\\');
         putchar('\\b');
      }
         
      else
         putchar(c);
   }
   printf("tabs:%d  backspace:%d\n",t,bs);


}


