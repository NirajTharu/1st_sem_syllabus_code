/* Program to understand the use of prefix increment/decrement*/
#include <stdio.h>
int main ( )
{
	int x = 8;
	printf("x = %d\t", x);
	printf("x = %d\t", ++x); /*prefix increment*/
	printf("x = %d\t", x);
	printf("x = %d\t", --x); /*prefix decrement*/
	printf("x = %d\n", x);
    return 0;
}