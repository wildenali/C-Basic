#include <stdio.h>
#include <math.h> // untuk fungsi pow()

int main() {

    int base1, exp1;
    long long result1 = 1;
    double base2, exp2;
    double result2;
    printf("Enter a base number: ");
    scanf("%d", &base1);
    printf("Enter a exponent: ");
    scanf("%d", &exp1);

    printf("\n==================== Pake WHILE LOOP ====================\n");
    while (exp1 != 0)
    {
        result1 = result1 * base1;
        --exp1;
    }
    printf("Jawabannya adalah %lld", result1);
    printf("\n==================== Pake WHILE LOOP ====================\n\n\n");


    printf("Enter a base number: ");
    scanf("%lf", &base2);
    printf("Enter a exponent: ");
    scanf("%lf", &exp2);
    printf("\n==================== Pake fungsi pow() ====================\n");
    result2 = pow(base2, exp2);
    printf("Jawabannya dari %.1lf^%.1lf adalah %.2lf", base2, exp2, result2);
    printf("\n==================== Pake fungsi pow() ====================\n");

    return 0;
}