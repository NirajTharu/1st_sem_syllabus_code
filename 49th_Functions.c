//Write a program to calculate the sum of N natural numbers using recursive function.
#include<stdio.h>
int sum(int);
int main()
{
int n,s;
printf("Input a number\n");
scanf("%d",&n);
s=sum(n);
printf("Sum of natural numbers=%d\n",s);
return 0;
}
int sum(int n)
{
if(n<=0)
return 0;
else
return(n+sum(n-1));
}

