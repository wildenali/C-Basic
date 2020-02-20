#include <stdio.h>

struct Student
{
    char name[50];
    int age;
};

// funciton prototype
struct Student getInformation();

int main() {

    struct Student iniLoh;

    iniLoh = getInformation();

    printf("\nDisplaying Information\n");
    printf("Name: %s", iniLoh.name);
    printf("\nAge: %d", iniLoh.age);

    return 0;
}

struct Student getInformation()
{
    struct Student s1;
    printf("Enter Name: ");
    scanf ("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);
  
    return s1;
};