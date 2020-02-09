#include <stdio.h>

int main() {

    // ================== For Loop ==================
    printf("\n================== For Loop ==================\n");
    int i;
    for (i = 0; i < 11; i++)
    {
        printf("%d ", i);
    }
    printf("\n================== For Loop ==================\n\n");
    // ================== For Loop ==================


    // ================== While Loop ==================
    printf("\n================== While Loop ==================\n");
    i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        ++i;
    }
    printf("\n================== While Loop ==================\n\n");
    // ================== While Loop ==================
    

    // ================== Do While Loop ==================
    printf("\n================== Do While Loop ==================\n");
    double number, sum = 0;
    do
    {
        printf("Masukan angka: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);
    printf("Sum = %.2lf", sum);
    printf("\n================== Do While Loop ==================\n\n");
    // ================== Do While Loop ==================

    return 0;
}