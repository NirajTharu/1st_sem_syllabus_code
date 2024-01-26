//Program to understand fputc( ) and fgetc( ).
#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("abc.txt","w");
printf("Enter text (Press ctrl+z to stop reading character)\n");
while((ch=getchar())!=EOF)
{
fputc(ch,fp);
}
fclose(fp);
fp=fopen("abc.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}