#include <stdio.h>

/* count characters in input */
int main()
{
   int c, nl, bl, t;

   nl = 0; //newlines
   t = 0; //tabs
   bl =0; //blanks

   /* trigger EOF with CTRL + D*/
   while((c = getchar()) != EOF)
   {
      if (c == '\n'){
         ++nl;
         putchar('\n');
      }
      else if (c == '\t'){
         ++t;
         putchar('\t');
      }
      else if (c == ' '){
         ++bl;
         putchar(32);
      }
      else
         putchar(c);
   }
   printf("blanks:%d  tabs:%d  new lines:%d\n",bl,t,nl);


}


