//Program to understand fprintf( ) and fscanf( )
#include<stdio.h>
int main()
{
struct student
{
int roll;
char name[15];
};
struct student st;
FILE *fp;
int i,n;
printf("How many records do you want to enter: ");
scanf("%d",&n);
fp=fopen("student.txt","w");
for(i=0;i<n;i++)
{
printf("\n Enter rollno and name of student: ");
scanf("%d%s",&st.roll,st.name);
fprintf(fp,"\n%d%s",st.roll,st.name);
}
fclose(fp);
fp=fopen("student.txt","r");
printf("\n Rollno\tName");
while(fscanf(fp,"%d%s",&st.roll,st.name)!=EOF)
{
printf("\n %d\t%s",st.roll,st.name);
}
fclose(fp);
return 0;
}