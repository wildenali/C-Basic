#include <stdio.h>

/*
factorial of n (n!) = 1 * 2 * 3 * 4....n
*/

int main() {

    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter an Integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
    {
        printf("Error! Faktorial of a negative number TIDAK bisa");
    }
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Faktorial of %d = %llu", n, fact);
        
    }
    
    
    return 0;
}