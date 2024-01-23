/*Write a program to read the marks of four subjects then find total, percentage and division according to given condition.
Percentage				Division
p  ≥ 80					Distinction
80 > p ≥ 70				First division
70 > p  ≥ 50				Second division
50 >p  ≥ 40				Third division
Otherwise				Fail.

Assume each subject carrying 100 full marks and student must secure greater or equal to 40 in each subject for division.*/
#include<stdio.h>

int main()
{
int s1,s2,s3,s4,total;
float per;

printf("Enter marks in 4 different subjects:\n");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
total=s1+s2+s3+s4;
printf("Total marks:%d\n",total);
if(s1>=40&&s2>=40&&s3>=40&&s4>=40)
{
printf("Result:PASS\n");
per=total/4.0;
printf("Percentage:%f\n",per);
if(per>=80)
printf("Division:DISTINCTION\n");
else if(per>=70)
printf("Division:FIRST\n");
else if(per>=50)
printf("Division:SECOND\n");
else
printf("Division:THIRD\n");
}
else
printf("Result:FAIL\n");
return 0;
}