//Program to understand & and * operator.
 #include<stdio.h>
 int main()
 {
 int age=25,*page;
 float sal=50000,*psal;
 page=&age;
 psal=&sal;
 printf("\nAddress of age=%u and value of age=%d",page,*page);
 printf("\nAddress of sal=%u and value of sal=%f\n",psal,*psal);
 return 0;
 }
