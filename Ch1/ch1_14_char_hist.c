#include <stdio.h>

/* prints a histogram of the frequencies of different
 * characters in its input. 
 */ 
#define LENGTH 62
int main(void){
   int c, i, j;
   int char_array_counter[LENGTH];
   char char_array[LENGTH];
   
   for (i = 0; i < LENGTH; ++i)
      char_array_counter[i] = 0;

   for (i = 0; i < 10; ++i)
      char_array[i] = i + '0';
   for (i = 10; i < 36; ++i)
      char_array[i] = i - 10 + 'A';
   for (i = 36; i < LENGTH; ++i)
      char_array[i] = i - 36 + 'a'; 

   while ((c = getchar()) != EOF){
      if (c >= '0' && c <= '9')
         ++char_array_counter[c-'0'];
      else if(c >= 'A' && c <= 'Z')
         ++char_array_counter[c - 'A' + 10];
      else if (c >= 'a' && c <= 'z')
         ++char_array_counter[c - 'a' + 36];
      putchar(c);
   }
   for (i = 0; i < LENGTH; ++i){
      printf("%c: ", char_array[i]); 
      for (j = 0; j < char_array_counter[i]; ++j){
         printf("*");
      }
      printf("\n");
   }
  
}
