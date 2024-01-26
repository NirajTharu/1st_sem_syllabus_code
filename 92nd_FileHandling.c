//The second argument in the putc() function must be a file opened in either write or append mode. 

#include <stdio.h> 
int main () 
{   
char in_file[30], out_file[30];   
FILE *fpin, *fpout;   
int c;   
printf("This program copies the source file to the destination file \n\n");   
printf("Enter name of the source file :");   
scanf("%30s", in_file);   
printf("Enter name of the destination file :");   
scanf("%30s", out_file);   
if((fpin=fopen(in_file, "r")) == NULL)     
printf("Error could not open source file for reading\n");   
else if ((fpout=fopen(out_file, "w")) == NULL)     
printf("Error could not open destination file for reading\n");   
else    
{     
while((c =getc(fpin)) != EOF)       
putc(c, fpout);     
printf("Destination file has been copied\n");   
} 
} 
