//Example to pass a single element of an array to function
#include <stdio.h>
void display(int age)
{
    printf("%d\n", age);
}
int main()
{
    int ageArray[] = { 2, 3, 4 };
    display(ageArray[2]); //Passing array element ageArray[2] only.
    return 0;
}
