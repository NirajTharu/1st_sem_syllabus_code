#include<stdio.h>
int main()
{
union student
{
int roll;
char name[15];
};
union student st;
printf("\n Enter roll no: ");
scanf("%d",&st.roll);
printf(" Rollno :%d",st.roll);
printf("\n Enter name: ");
scanf("%s",st.name);
printf(" Name :%s",st.name);
return 0;
}