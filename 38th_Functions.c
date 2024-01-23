#include<stdio.h>

void sum(int,int);		//function declaration
int main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
sum(a,b);				//function call
}

void sum(int x,int y)
{	//function definition	
int s;	
s=x+y;
printf("Sum =%d\n",s);
}
