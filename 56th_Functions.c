// Pass by reference(Call by Reference)
#include<stdio.h>
void change(int*);
int main()
{
int a=15;
printf("Before calling function a=%d\n",a);
change(&a);
printf("After calling function a=%d\n",a);
return 0;
}
void change(int *x)
{
*x=*x+5;
}
