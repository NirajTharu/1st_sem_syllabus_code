//pointer to pointer (double indirection)

// Program to understand pointer to pointer
#include<stdio.h>
int main()
{
int a=5,*pa,**ppa;
pa=&a;
ppa=&pa;
printf("\nValue of a=%d",*pa);
printf("\nValue of a=%d\n",**ppa);
return 0;
}
