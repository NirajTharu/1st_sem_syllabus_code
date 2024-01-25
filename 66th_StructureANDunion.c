// Array Within Structure
//Write a program to read rollno, name and marks of students in 5 different subjects for ‘n’ students and display all records of students in appropriate format.
#include<stdio.h>
int main()
{
struct student
{
int roll;
char name[15];
int submarks[5];
};
struct student st[100];
int i,j,n;
printf("\nHow many students are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter rollno, name: ");
scanf("%d%s",&st[i].roll,st[i].name);
for(j=0;j<5;j++)
{
printf("\n Enter subject marks for %s: ",st[i].name);
scanf("%d",&st[i].submarks[j]);
}
}
printf("\nRollno\tName\tsub1\tsub2\tsub3\tsub4\tsub5");
for(i=0;i<n;i++)
{
printf("\n%d\t%s",st[i].roll,st[i].name);
for(j=0;j<5;j++)
{
printf("\t%d",st[i].submarks[j]);
}
printf("\n");
}
return 0;
}