// A program to delete and rename the file.
#include<stdio.h>
int main()
{
char str[20];
FILE *fp;
fp=fopen("fil.txt","w");
printf("\nInput string: ");
scanf("%s",str);
fprintf(fp,"%s",str);
fclose(fp);
rename("fil.txt","newfil.txt"); /* rename the file name to newfil.txt */
remove("newfil.txt");           /* removes(delete) file newfil.txt */
return 0;
}
