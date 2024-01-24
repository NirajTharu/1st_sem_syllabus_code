// Passing Multi_Dimensional array to a function
#include<stdio.h>
int sum(int[][2],int[][2]);
int main()
{
int mat1[2][2]={3,7,9,1};
int mat2[2][2]={4,2,6,8};
sum(mat1,mat2);
return 0;
}

int sum(int a[][2],int b[][2])
{
int i,j,c[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
