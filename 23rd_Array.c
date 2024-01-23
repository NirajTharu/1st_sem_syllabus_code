//Write a program to search an element from N number of array elements.
#include<stdio.h>

int main()
{
int arr[20],search,i,n;
printf("How many number of elements are there in array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter elements of array\n");
scanf("%d",&arr[i]);
}
printf("Enter element to be searched\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(arr[i]==search)
{
printf("Search element found\n");
break;
}
}
if(i==n)
printf("Element not found\n");
return 0;
}
