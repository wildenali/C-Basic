#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

// function prototype
void display(struct student s);

int main() {

    struct student s1;
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1);

    return 0;
}


void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Nama: %s", s.name);
    printf("\nUmur: %d", s.age);
}