// Using array of struccture 
#include<stdio.h>
struct Employee 
{ 
int Id; 
char Name[25]; 
int Age; 
long Salary; 
};
int main()
{ 
int i; 
struct Employee Emp[ 3 ];         //Statement   1
for(i=0;i<3;i++) 
{
printf("\nEnter details of %d Employee",i+1);
printf("\n\tEnter Employee Id : "); 
scanf("%d",&Emp[i].Id);
printf("\n\tEnter Employee Name : "); 
scanf("%s",&Emp[i].Name);
printf("\n\tEnter Employee Age : "); 
scanf("%d",&Emp[i].Age);
printf("\n\tEnter Employee Salary : "); 
scanf("%ld",&Emp[i].Salary);
}
printf("\nDetails of Employees"); 
for(i=0;i<3;i++) 
printf("\n%d\t%s\t%d\t%ld\n",Emp[i].Id,Emp[i].Name,Emp[i].Age,Emp[i].Salary);
}