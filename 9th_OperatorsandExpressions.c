/*Program to understand the size of operator*/
#include<stdio.h>
int main ( )
{	int var;
	printf ("size of int = %lu\n", sizeof(int));
	printf("size of float = %lu\n", sizeof(float));
	printf("size of var = %lu\n", sizeof(var));
	printf("size of an integer constant=%lu\n", sizeof(45));
    return 0;
}