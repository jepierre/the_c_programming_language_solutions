/*###################################################################
# Author: Jean-Elie Pierre
# C Programming Language KNR Solution
# Exercise 1-1 
#*/


#include<stdio.h>

int main(int argc, char *argv[]){
	char alphabet_array[26];
	
	for (int i=0; i<26; i++){
		alphabet_array[i] = 97 + i;
		printf("array[%d]: %c\n", i, alphabet_array[i]);
	}
	
	printf("new line\n");
	printf("double quote \"\n");
	printf("single quote\'\n");
	printf("backlash \\\n");
   printf("alert \a\n");
   printf("horizontal tab \t.\n");
   printf("question mark\?\n");
   printf("octal number \134\n");
   printf("hexadecimal number \xff\n");
	
	return 0;
}
