//Program to understand dynamic allocation of memory.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,n,i;
printf("How many numbers do you want to entered: ");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
printf("\n Enter number: ");
scanf("%d",ptr+i);
}
printf("\nDisplaying elements: ");
for(i=0;i<n;i++)
{
printf("\n%d\n",*(ptr+i));
}
return 0;
}
