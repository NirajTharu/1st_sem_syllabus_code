/*Program to understand the work of strlen() function*/
#include<stdio.h>
#include<string.h>
int main( )
{
	char str[20];
	int length;
	printf("Enter the string:\n");
	scanf("%s",str);
	length = strlen(str);
	printf("Length of the string is : %d\n", length);
    return 0;
}
