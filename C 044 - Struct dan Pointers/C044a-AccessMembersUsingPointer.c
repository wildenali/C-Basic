#include <stdio.h>

struct person
{
    int age;
    float weight;
};

int main() {

    struct person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter wight: ");
    scanf("%f", &personPtr->weight);

    printf("\nUmur: %d", personPtr->age);
    printf("\nBerat: %f\n", personPtr->weight);



    return 0;
}
