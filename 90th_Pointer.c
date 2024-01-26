//Write a program to sort ‘n’ numbers in ascending order using dynamic memory.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,n,i,j,temp;
printf("How many numbers do you want to entered: ");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
printf("\n Enter number: ");
scanf("%d",ptr+i);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(*(ptr+i)>*(ptr+j))
{
temp=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=temp;
}
}
}
printf("\nDisplaying sorted elements: ");
for(i=0;i<n;i++)
{
printf("\n%d\n",*(ptr+i));
}
return 0;
}
