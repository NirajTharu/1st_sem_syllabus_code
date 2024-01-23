//Write a program to read 10 numbers from user and display it on the screen.
#include<stdio.h>

int main()
{
int arr[10],i;
for(i=0;i<10;i++)
{
printf("Enter elements of array\n");
scanf("%d",&arr[i]);
}
printf("Displaying array elements\n");
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}