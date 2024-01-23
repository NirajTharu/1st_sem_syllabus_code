//Write a program to read a positive number from user.
#include<stdio.h>

int main()
{
int n;
again:
printf("Enter a number:\n");
scanf("%d",&n);
if(n<0)
{
printf("Number is negative so re-enter a number:\n");
goto again;
}
return 0;
}
