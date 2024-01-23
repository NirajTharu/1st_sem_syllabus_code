// Write a program to find largest among any three given numbers.
#include<stdio.h>

int main()
{
int a,b,c,large;

printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    large=a;
    else
    large=c;
}
else
{
    if(b>c)

    large=b;
    else
    large=c;
}
printf("Largest number=%d\n",large);
return 0;
}
