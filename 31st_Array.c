/* Program to understand the work of strcmp( ) function*/
#include<stdio.h>
#include<string.h>
int main( )
{
	char str1[10], str2[10];
	printf("Enter the first string:\n");
	scanf("%s", str1);
	printf("Enter the second string:");
	scanf("%s", str2);
	if((strcmp(str1, str2)) == 0)
		printf("Strings are same\n");
	else
		printf("Strings are not same\n");
    return 0;
}
