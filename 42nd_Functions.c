// Function with no argument and  a return type
#include<stdio.h>
int sum();
int main()
{
int c;
c=sum();
printf("sum=%d\n",c);
return 0;
}

int sum()
{
int x,y,s;
printf("Enter two numbers\n");
scanf("%d%d",&x,&y);
s=x+y;
return(s);
}
