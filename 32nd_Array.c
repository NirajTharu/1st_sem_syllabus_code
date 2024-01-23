/* Program to understand the work of strcpy( ) function*/
#include<stdio.h>
#include<string.h>
int main( )
{
	char str1[10], str2[10];
	printf("Enter the first string:\n");
	scanf("%s", str1);
	printf("Enter the second string:\n");
	scanf("%s", str2);
	strcpy(str1, str2);
	printf("First string : %s \t\t Second string: %s\n", str1, str2);
	strcpy(str1, "Jomsom");
	strcpy(str2, "Kagbeni");
	printf("First string : %s \t\t Second string: %s\n", str1, str2);
}
