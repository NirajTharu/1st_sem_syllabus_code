//Write a program to read any 2×2 matrix and display it in appropriate format.
#include<stdio.h>

int main()
{
int a[2][2],i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter elements of matrix\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}
