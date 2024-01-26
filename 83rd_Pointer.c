// A program to search an element from ‘n’ number of elements using pointer.
#include<stdio.h>
int main()
{
int arr[100],n,i,search;
printf("How many elements are there:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter elements :");
scanf("%d",(arr+i));
}
printf("\n Enter an element to be searched: ");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(search==*(arr+i))
{
printf("\n %d is found in %d position\n",search,i+1);
break;
}
}
if(i==n)
printf("\n %d is not in the list!!\n",search);
return 0;
}
