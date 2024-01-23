//Write a program to display the sum of all elements of any 3×2 matrix.
#include<stdio.h>
int main()
{
int a[3][2],i,j,sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("Enter elements of matrix\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
sum=sum+a[i][j];
}
}
printf("Sum of all elements of matrix =%d\n",sum);
return 0;
}