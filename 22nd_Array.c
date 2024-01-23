//Write a program to display smallest and largest element from N number of array elements.
#include<stdio.h>

int main()
{
int arr[20],i,n,small,large;
printf("How many number of elements are there in array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter elements of array\n");
scanf("%d",&arr[i]);
}
small=arr[0];
large=arr[0];
for(i=0;i<n;i++)
{
if(small>arr[i])
small=arr[i];
if(large<arr[i])
large=arr[i];
}
printf("Smallest element =%d\nAnd largest element =%d\n",small,large);
return 0;
}