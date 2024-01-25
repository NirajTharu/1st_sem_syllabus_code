//Write a program to read name, rollno and fee of a student and display it on screen using structure.

#include<stdio.h>
int main()
{
struct student
{
	char name[15];
	int roll;
	float fee;
};
struct student st;
printf("Enter name rollno and fee of a student\n");
scanf("%s%d%f",st.name,&st.roll,&st.fee);
printf("\nDisplaying information\n");
printf("Name=%s \nRollno=%d \nFee=%f\n",st.name,st.roll,st.fee);
return 0;
}