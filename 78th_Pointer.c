//Program to understand pointer arithmetic
#include<stdio.h>
int main()
{
int a=5,*pi;
float b=7.3,*pf;
char c='x',*pc;
pi=&a;
pf=&b;
pc=&c;
printf("\n Address of a=%u ",pi);
printf("\n Address of b=%u ",pf);
printf("\n Address of c=%u ",pc);
pi++;
pf++;
pc++;
printf("\n\n Address of a=%u ",pi);
printf("\n Address of b=%u ",pf);
printf("\n Address of c=%u\n",pc);
return 0;
}
