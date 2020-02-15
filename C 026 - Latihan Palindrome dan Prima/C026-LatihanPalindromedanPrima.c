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
    printf("\n==================== Latihan Bilangan PRIMA ====================\n\n");
    

    printf("\n==================== Latihan Bilangan PRIMA antara dua bilangan ====================\n");
    int low, high, ii, bendera;
    printf("Masukan Dua buah angka: ");
    scanf("%d %d", &low, &high);
    printf("Prime number between %d and %d are: ", low, high);

    while (low < high)
    {
        bendera = 0;

        // if is a non-prime number, flag will be 1
        for (ii = 2; ii <= low/2; ++ii)
        {
            if (low % ii == 0)
            {
                bendera = 1;
                break;
            }
        }
        if (bendera == 0)
        {
            printf("%d ", low);
        }
        ++low;
        

    }
    
    printf("\n==================== Latihan Bilangan PRIMA antara dua bilangan ====================\n");



    return 0;
}