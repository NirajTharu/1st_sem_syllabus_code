//Write a program to read N students name and display them in alphabetical order.
#include<stdio.h>
#include<string.h>
int main()
{
char name[100][15],temp[15];
int i,j,n;
printf("How many students are there\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name of student\n");
scanf("%s",name[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("Names in alphabetical order\n");
for(i=0;i<n;i++)
{
printf("%s\n",name[i]);
}
return 0;
}
