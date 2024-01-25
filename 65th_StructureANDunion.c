//Define a structure containing members as roll no, name, course and semester and write program to input information about ‘n’ students and display the name and course of all students.
#include<stdio.h>
int main()
{
struct student
{
int roll;
char name[15];
char course[15];
char sem[15];
};
struct student st[100];
int i,n;
printf("\nHow many students are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter rollno, name, course and semester: ");
scanf("%d%s%s%s",&st[i].roll,st[i].name,st[i].course,st[i].sem);
}
printf("\nRoll\tName\tCourse\tSemster\n");
for(i=0;i<n;i++)
{
printf("%d\t%s\t%s\t%s\n",st[i].roll,st[i].name,st[i].course,st[i].sem);
}
return 0;
}