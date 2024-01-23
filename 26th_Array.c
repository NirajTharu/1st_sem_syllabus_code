/* C program to find the sum marks of n students using arrays */ 
#include <stdio.h>
int main()
{
int i,n; 
int sum=0;
printf("Enter number of students:\n");
scanf("%d",&n); 
int marks[n];
for(i=0;i<n; i++)
{ 
printf("Enter marks of student%d:\n",i+1); 
scanf("%d",&marks[i]); //saving the marks in array 
sum+=marks[i];
}
printf("Sum of marks = %d\n",sum);
return 0;
}