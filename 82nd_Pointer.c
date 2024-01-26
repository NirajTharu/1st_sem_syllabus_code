//Write a program to find sum of all the elements of an array using pointers.
#include<stdio.h>
int main()
{
int arr[100],n,i,sum=0;
printf("How many elements are there:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter elements of array: ");
scanf("%d",(arr+i));
}
for(i=0;i<n;i++)
{
sum=sum + *(arr+i);
}
printf("\nSum of all elements of array =%d\n",sum);
return 0;
}
