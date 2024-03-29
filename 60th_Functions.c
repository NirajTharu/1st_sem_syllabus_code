// Passing Multi_Dimensional Arrays to a function
#include <stdio.h>
void displayNumbers(int num[2][2]);
int main()
{
    int num[2][2], i, j;
    printf("Enter 4 numbers:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);
    // passing multi-dimensional array to displayNumbers function
    displayNumbers(num);
    return 0;
}
void displayNumbers(int num[2][2])
{
    // Instead of the above line,
    // void displayNumbers(int num[][2]) is also valid
    int i, j;
    printf("Displaying:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            printf("%d\n", num[i][j]);
}
