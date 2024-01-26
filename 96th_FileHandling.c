// A program to copy contents of one file to another
//First make the text files of the following names
#include<stdio.h>
int main()
{
FILE *fp1,*fp2;
char ch;
fp1=fopen("abc.txt","r");
fp2=fopen("xyz.txt","w");
while((ch=getc(fp1))!=EOF)
{
putc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
return 0;
}
