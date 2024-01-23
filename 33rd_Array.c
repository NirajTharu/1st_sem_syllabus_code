/* Program to understand the work of strcat( ) function*/
#include<stdio.h>
#include<string.h>
int main( )
{
	char str1[20], str2[20];
	printf("Enter the first string:");
	scanf("%s", str1);
	printf("Enter the second string:");
	scanf("%s", str2);
	strcat(str1,str2);
	printf("First string:%s\n",str1);
    printf("Second string:%s\n",str2);
	strcat(str1, "_one");
	printf("Now first string is : %s\n", str1);
    return 0;
}
