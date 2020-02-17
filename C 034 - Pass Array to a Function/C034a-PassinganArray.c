#include <stdio.h>

void display(int age1, int age2) {
    printf("%d\n", age1);
    printf("%d\n", age2);
}

float calculateSum(float age[]) {
    float sum = 0.0;
    for (int i = 0; i < 6; i++)
    {
        sum += age[i];
    }
    return sum;
}

void displayNumber(int num[2][2]) {
    printf("Displaying: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", num[i][j]);
        }   
    }
}

int main() {

    printf("\n============== Contoh 1 ==============\n");
    int ageArray[] = {2, 8, 4, 12};
    display(ageArray[1], ageArray[2]);
    printf("\n============== Contoh 1 ==============\n\n");

    printf("\n============== Contoh 2 ==============\n");
    float result, age[] = {23.4, 55, 22.6, 3, 40,3, 19};
    result = calculateSum(age);
    printf("Result = %.2f", result);
    printf("\n============== Contoh 2 ==============\n\n");

    printf("\n============== Contoh 3 ==============\n");
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    displayNumber(num);
    printf("\n============== Contoh 3 ==============\n\n");


    return 0;
}