//Program to understand putc( ) and getc( ).
#include<stdio.h>
int main()
{
FILE *fptr;
char ch;
printf("\n Enter any character: ");
scanf("%c",&ch);
fptr=fopen("abc.txt","w");
putc(ch,fptr);
fclose(fptr);
fptr=fopen("abc.txt","r");
ch=getc(fptr);
printf("\n %c\n",ch);
return 0;
}
