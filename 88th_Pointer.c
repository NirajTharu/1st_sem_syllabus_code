//The following program demonstrates how we can use a pointer to structure.
//This program does not run because of strcpy() function
#include<stdio.h>
struct dog
{
    char name[10];
    char breed[10];
    int age;
    char color[10];
};
int main()
{
    struct dog my_dog = {"tyke", "Bulldog", 5, "white"};
    struct dog *ptr_dog;
    ptr_dog = &my_dog;
    printf("Dog's name: %s\n", ptr_dog->name);
    printf("Dog's breed: %s\n", ptr_dog->breed);
    printf("Dog's age: %d\n", ptr_dog->age);
    printf("Dog's color: %s\n", ptr_dog->color);
    // changing the name of dog from tyke to jack
    strcpy(ptr_dog->name, "jack");
    // increasing age of dog by 1 year
    ptr_dog->age++;
    printf("Dog's new name is: %s\n", ptr_dog->name);
    printf("Dog's age is: %d\n", ptr_dog->age);
    // signal to operating system program ran fine
    return 0;
}
