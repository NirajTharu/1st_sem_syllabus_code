//Passing entire one dimensional array to a function
#include<stdio.h>
void func(int[]);
int main()
{	
int arr[5]={5,8,12,45,9};
func(arr);
return 0;
}
void func(int a[])
{
int i;
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}
