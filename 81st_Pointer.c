// A program to sort ‘n’ numbers in ascending order using pointer.
#include<stdio.h>
int main()
{
int arr[100],n,i,j,temp;
printf("How many elements are there?: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter elements :");
scanf("%d",(arr+i));
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(*(arr+i)>*(arr+j))
{
temp=*(arr+i);
*(arr+i)=*(arr+j);
*(arr+j)=temp;
}
}
}
printf("\n Printing sorted elements:");
for(i=0;i<n;i++)
{
printf("\n %d\n",*(arr+i));
}
return 0;
}
