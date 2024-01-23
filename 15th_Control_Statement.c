//Write a program to print the day of the week according to the number entered 1 for Sunday ……..7 for Saturday.
#include<stdio.h>

int main()
{
int num;

printf("Enter a number\n");
scanf("%d",&num);
switch(num)
{
case 1:
printf("Sunday\n");
break;
case 2:
printf("Monday\n");
break;
case 3:
printf("Tuesday\n");
break;
case 4:
printf("Wednesday\n");
break;
case 5:
printf("Thusday\n");
break;
case 6:
printf("Friday\n");
break;
case 7:
printf("Saturday\n");
break;
default:
printf("Wrong input\n");
}
return 0;
}