// Pointer with two dimensional Array

// program to read any 2 by 3 matrix and display its element in appropriate format.
#include<stdio.h>
int main()
{
int arr[2][3],i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n Enter elements of matrix: ");
scanf("%d",&arr[i][j]);
}
}
printf("\nThe Elements of the 2x3 matrix is:\n");

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",*(*(arr+i)+j));
}
printf("\n");
}
return 0;
}
