//Write a recursive program to calculate xy (x to the power y).
#include<stdio.h>
int power(int,int);
int main()
{
int a,p,n;
printf("Enter value of a and n :");
scanf("%d%d",&a,&n);
p=power(a,n);
printf("%d raised to power %d is %d\n",a,n,p);
return 0;
}
int power(int a,int n)
{
if(n==0)
return 1;
else
return(a*power(a,n-1));
}
