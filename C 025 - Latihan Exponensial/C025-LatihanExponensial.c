#include <stdio.h>

int main() {

    int base, exp;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a exponent: ");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result = result * base;
        --exp;
    }
    printf("Jawabannya adalah %lld", result);
    

    return 0;
}