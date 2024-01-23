//Function with argument and no return value
#include<stdio.h>
void sum(int,int);		
int main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
sum(a,b);				
return 0;
}

void sum(int x,int y)
{		
int s;	
s=x+y;
printf("Sum =%d\n",s);
}