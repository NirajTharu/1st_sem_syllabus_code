// All members of structure can be accessed at any time. But, only one member of union can be accessed at a time in case of union and other members will contain garbage value.
//Don't know the reason but you will get the garbage value of name.
#include <stdio.h>
union job {
char name[32];
float salary;
int worker_no;
}u;
int main(){
printf("Enter name:\n");
scanf("%s",u.name);
printf("Enter salary: \n");
scanf("%f",&u.salary);
printf("Displaying\nName:%s\n",u.name);
printf("Salary: %.1f\n",u.salary);
return 0;
}
