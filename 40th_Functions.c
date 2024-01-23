// Function with no argument and no retunrn type
#include<stdio.h>
void sum();
int main()
{
sum();
return 0;
}

void sum()
{
int x,y,s;
printf("Enter two numbers:\n");
scanf("%d%d",&x,&y);
s=x+y;
printf("Sum =%d\n",s);
}