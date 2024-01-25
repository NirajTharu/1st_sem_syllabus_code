// Pointer to structure
#include<stdio.h>
int main()
{
struct customer
{
int id;
char name[15];
char address[15];
};
struct customer cu={1,"Binod","Bharatpur"};
struct customer *ptr;
ptr=&cu;
printf("\n ID :%d",ptr->id);
printf("\n Name :%s",ptr->name);
printf("\n Address :%s\n",ptr->address);
return 0;
}