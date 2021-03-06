#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size */

int get_line(char s[], int lim);

int main(){

   char line[MAXLINE]; 
   int x = get_line(line, MAXLINE);

   printf("%s", line);

   return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
   int c, i;

   /* for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
      s[i] = c; */

   i =0;
   while(i<lim-1){
      if ((c =getchar()) ==EOF)
         break;
      if (c == '\n')
         break;

      s[i] = c;
      ++i;
   }

   if (c == '\n'){
      s[i] = c;
      ++i;
   }

   s[i] = '\0';
   return i;
}

