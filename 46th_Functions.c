//Function with argument and return value
#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,c;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum=%d\n",c);
return 0;
}

int sum(int x,int y)
{
int s;
s=x+y;
return(s);
}