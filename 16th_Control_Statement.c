/*Write a program to perform arithmetic calculation based on the operators entered by user.
+ for addition, - for subtraction, * for multiplication, / for division and % for remainder.*/
#include<stdio.h>
int main()
{
int a,b;
char op;

printf("Enter operator\n");
scanf("%c",&op);
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
switch(op)
{
case '+':
printf("Sum =%d\n",a+b);
break;
case '-':
printf("Difference =%d\n",a-b);
break;
case '*':
printf("Product =%d\n",a*b);
break;
case '/':
printf("Quotient =%d\n",a/b);
break;
case '%':
printf("Remainder =%d\n",a%b);
break;
default:
printf("Wrong operator\n");
}
return 0;
}

