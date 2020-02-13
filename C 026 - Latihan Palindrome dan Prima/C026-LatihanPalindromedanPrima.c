#include <stdio.h>

int main() {


    printf("\n==================== Latihan PALINDROME ====================\n");
    int n, reversedN = 0;
    int remainder, originalN;
    scanf("%d", &n);
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0)
    {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
        printf("cek reversedN %d\n", reversedN);
    }

    // palindrome if originalN and reversedN are equal
    if (originalN == reversedN)
    {
        printf("%d is a polindrome", originalN);
    }
    else
    {
        printf("%d is not a palindrome", originalN);
    }
    printf("\n==================== Latihan PALINDROME ====================\n\n\n\n");
    
    
    printf("\n==================== Latihan Bilangan PRIMA ====================\n");
    int a, b, flag = 0;
    printf("Masukan angka: ");
    scanf("%d", &b);

    for (a = 2; a <= b/2; ++a)
    {
        // condition for non-prime
        if (b % a == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if (b == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        if (flag == 0)
        {
            printf("%d is a prime number.", b);
        }
        else
        {
            printf("%d is not a prime number.", b);
        }
        
    }
    
    
    


    return 0;
}