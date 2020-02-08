#include <stdio.h>

int main() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n\n================== pake if else ==================\n");
    if (num % 2 == 0)   // Jika si num tidak ada sisa bagi
    {
        printf("%d is even", num);      // ini Genap
    } else
    {
        printf("%d is odd", num);      // ini Ganjil
    }
    
    printf("\n\n================== pake Ternary Operator ==================\n");
    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);

    return 0;
}