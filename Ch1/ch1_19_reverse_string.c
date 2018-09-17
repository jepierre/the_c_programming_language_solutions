#include <stdio.h>
#define MAXLINE 100 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void reverse_string(char s[], char srev[], int len);

/* print longest line line */
int main(void){
   int len; //current line length
   int max; //max length so far
   char line[MAXLINE]; //current input line
   char line_rev[MAXLINE]; //longest line saved here

   max = 0;
   while ((len = get_line(line, MAXLINE)) > 0){
         printf("%s", line);

         reverse_string(line, line_rev, len);
         printf("%s", line_rev);
   }

   return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
   int c, i;

   for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
      s[i] = c;
   if (c == '\n') {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return i;

}

/* copy: copy 'from' into 'to'; assume to is big enougth */
void copy(char to[], char from[])
{
   int i;

   i = 0;
   while ((to[i] = from[i]) != '\0')
      ++i;
}

void reverse_string(char s[], char srev[], int len){
   int i = 0;

   while((srev[len-2-i] = s[i]) != '\n')
      ++i;

   srev[len] = '\0';
}
