/*
The program does not run.
#include<stdio.h>
#include<string.h>
int main()
{
char s1[15],s2[15];
printf("Enter a string: ");
scanf("%s",s1);
strcpy(s2,s1);
strrev(s2); //ISO C99 and later do not support implicit function declarations
if(strcmp(s1,s2)==0)
printf("%s is palindrome",s1);
else
printf("%s is not palindrome",s1);
return 0;
}
*/