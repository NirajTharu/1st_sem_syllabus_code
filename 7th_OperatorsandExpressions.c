/* Program ro understand the use of comma operator */
#include <stdio.h>
int main ( )
{
	int a, b, c, sum;
	sum = ( a = 8, b = 7, c = 9, a + b + c);
	printf("sum = %d\n", sum);
    return 0;
}