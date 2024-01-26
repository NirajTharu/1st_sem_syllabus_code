// Passing Array of structure to function
#include<stdio.h>
struct customer
{
int id;
char name[15];
char address[15];
};
void display(struct customer c[]);
int main()
{
struct customer cu[3]={{1,"Binod","Bharatpur"},{2,"Nabin","Pokhara"},{3,"Dibya","Kathmandu"}};
display(cu);
return 0;
}
void display(struct customer c[])
{
int i;
printf("\nId\tName\tAddress ");
for(i=0;i<3;i++)
{
printf("\n%d\t%s\t%s",c[i].id,c[i].name,c[i].address);
}
}
