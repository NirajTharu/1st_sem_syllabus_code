//Write a program to calculate factorial of any given number using recursive function.
#include<stdio.h>
long int factorial(int);
int main()
{
int num,fact;
printf("Enter a number\n");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of %d = %d\n",num,fact);
return 0;
}

long int factorial(int n)
{
if(n==0)
return 1;
else
return (n*factorial(n-1));
}
