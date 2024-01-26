//unions are similar to structure in so many ways, the difference between them is crucial to understand. This can be demonstrated by this example:
#include <stdio.h> 
union job 
{                      //defining a union
 char name[32]; 
float salary; 
int worker_no; 
}u; 
struct job1 
{ 
char name[32]; 
float salary; 
int worker_no; 
}s;
 int main()
{ 
printf("size of union = %d",sizeof(u)); 
printf("\nsize of structure = %d\n", sizeof(s)); 
return 0; 
}