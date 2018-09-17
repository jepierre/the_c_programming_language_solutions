#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 100 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest line line */
int main(void){
   int len; //current line length
   int max; //max length so far
   char line[MAXLINE]; //current input line
   char longest[MAXLINE]; //longest line saved here

   max = 0;
   while ((len = get_line(line, MAXLINE)) > 0)
      printf("%s%d", line, len);
   
   return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
   int c, i;
   bool sptab = false;
   i = 0;
   while(i < lim-1 && (c=getchar()) != EOF && c!='\n'){
      if ((c == ' ' || c == '\t') && i > 0){
         if(!sptab){
            s[i] = c;
            sptab = true;
            ++i;
         }
      }
      else{
         s[i] = c;
         ++i;
         sptab = false;
      }
   }
   if (c == '\n') {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return check_blank_lines(s, i);

}

/* copy: copy 'from' into 'to'; assume to is big enougth */
void copy(char to[], char from[])
{
   int i;

   i = 0;
   while ((to[i] = from[i]) != '\0')
      ++i;
}

int check_blank_lines(char s[], int len){
   int i;

   for (i = 0; i < len; ++i){
      if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
         return len;
   }
   return -1;
}
