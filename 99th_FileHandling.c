//Program to understand putw( ) and getw( )
#include<stdio.h>
int main()
{
FILE *fp;
int value;
fp=fopen("abc.txt","w");
for(value=1;value<=10;value++)
{
putw(value,fp);
}
fclose(fp);
fp=fopen("abc.txt","r");
while((value=getw(fp))!=EOF)
{
printf("%d\n",value);
}
fclose(fp);
return 0;
}
