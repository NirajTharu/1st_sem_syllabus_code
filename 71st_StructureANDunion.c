// Passing structure by reference
#include<stdio.h>

struct customer
{
int id;
char name[15];
char address[15];
};
void display(struct customer);
int main()
{
struct customer cu={1,"Binod","Bharatpur"};
display(cu);
return 0;
}
void display(struct customer c)
{
printf("\n ID :%d",c.id);
printf("\n Name :%s",c.name);
printf("\n Address :%s\n",c.address);
}
