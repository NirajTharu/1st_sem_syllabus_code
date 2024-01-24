//Global Variable Decleration
#include<stdio.h>
int a,b=5;		//global variables
void func1();
void func2();
int main()
{
printf("Inside main() a=%d and b=%d\n",a,b);
func1();
func2();
return 0;
}
void func1()
{
printf("Inside func1() a=%d and b=%d\n",a,b);
a=a+1;
b=b-1;
}
void func2()
{
printf("Inside func2() a=%d and b=%d\n",a,b);
}