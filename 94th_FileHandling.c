// Random file processing
// A program to write name, symbolno and address of ‘n’ students into a file named “student.txt” and display the record of students in appropriate format.

#include<stdio.h>
int main()
{
struct student
{
int sno;
char name[15];
char add[15];
};
struct student st;
FILE *fp;
fp=fopen("student.txt","w+");
int i,n;
clrscr();
printf("How many students are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter symbolno, name and address of student: ");
scanf("%d%s%s",&st.sno,st.name,st.add);
fwrite(&st,sizeof(st),1,fp);
}
rewind(fp);
printf("\nSymbno\tName\tAddress");
while(fread(&st,sizeof(st),1,fp)==1)
{
printf("\n%d\t%s\t%s",st.sno,st.name,st.add);
}
fclose(fp);
return 0;
}

