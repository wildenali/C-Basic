#include <stdio.h>

int main() {

    int dividend, divisor, quotient, remainder;
    printf("Masukan Pembilang: ");
    scanf("%d", &dividend);
    printf("Masukan Pembagi: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotien (Hasil Bagi) = %d\n", quotient);
    printf("Remainder (Sisa Bagi) = %d\n", remainder);

    return 0;
}