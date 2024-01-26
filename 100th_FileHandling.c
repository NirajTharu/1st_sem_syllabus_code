//Program to understand fputs( ) and fgets( ).
#include<stdio.h>
int main()
{
FILE *fptr;
char str[80];
fptr=fopen("abc.txt","w");
printf("Enter the text (Press ctrl+z to stop entering) \n");
while(gets(str)!=NULL)
fputs(str,fptr);
fclose(fptr);
fptr=fopen("abc.txt","r");
while(fgets(str,80,fptr)!=NULL)
{
puts(str);
}
fclose(fptr);
return 0;
}
