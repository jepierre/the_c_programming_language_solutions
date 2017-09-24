#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outsite a word

/* prints a histogram of the length of words in its input. 
 * counts a word as characters other than space, tab and new lines.
 */
void main(void){
   int c, i, state, nc;
   int wordl[10];

   nc = 0;
   for (i = 0; i < 10; ++i)
      wordl[i] = 0;
   state = OUT;

   while ((c = getchar()) != EOF){

      if (c == ' ' || c == '\n' || c == '\t'){
         if (state == IN){
            //printf("char count: %d\n", nc);
            if (nc > 0)
               ++wordl[nc];
            nc = 0;
         }
         state = OUT;

      }
      else{ 
         state = IN;
         ++nc;
      }
      putchar(c);
   }
      
      for (i = 0; i < 10; ++i){
         int j; 
         printf("word[%d]: ", i+1);
         for (j =0; j < wordl[i+1]; ++j){
            printf("*");
         }
         printf("\n");
      }

}

