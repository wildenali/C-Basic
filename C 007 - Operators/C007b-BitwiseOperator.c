#include <stdio.h>

int main() {

    int a = 12;
    int b = 25;

    printf("a AND b = %d\n", a&b);
    printf("a OR b = %d\n", a|b);
    printf("a XOR b = %d\n", a^b);
    printf("Complement ~a = %d\n", ~a);

    int num = 212;
    for (int i = 0; i <= 2; ++i)
    {
        printf("Right shift by %d: %d\n", i, num>>i);
    }
    printf("\n");
    for (int i = 0; i <= 2; ++i)
    {
        printf("Left shift by %d: %d\n", i, num<<i);
    }
    
    

    return 0;
}