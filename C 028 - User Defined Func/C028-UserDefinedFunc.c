#include <stdio.h>

// Contoh 1 - Ini prototype
int addNumbers(int a, int b);       // ini prototype

// Contoh 2 - No Argument passed and No Return value
void checkPrimeNumber();

// Contoh 3 - No Argument passed BUT a Return Value
int getInteger();

// Contoh 4 - Argument passed BUT no Return Value
void checkPrimeAndDisplay(int n);

// Contoh 5 - Argument passed and a Return Value
int checkPrimeNumber2(int n);

int main() {

    printf("\n=============== Contoh 1 - Prototype ===============\n");
    int n1, n2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2);
    printf("sum = %d", sum);
    printf("\n=============== Contoh 1 - Prototype ===============\n\n");

    printf("\n=============== Contoh 2 - No Argument and No Return Value ==============\n");
    checkPrimeNumber();
    printf("\n=============== Contoh 2 - No Argument and No Return Value ===============\n\n");

    printf("\n=============== Contoh 3 - No Argument BUT a Return Value ===============\n");
    int n, i, flag = 0;
    n = getInteger();    
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    printf("\n=============== Contoh 3 - No Argument BUT a Return Value ===============\n\n");

    printf("\n=============== Contoh 4 - Argument passed BUT no Return Value ==============\n");
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    checkPrimeAndDisplay(n);
    printf("\n=============== Contoh 4 - Argument passed BUT no Return Value ===============\n\n");
    
    printf("\n=============== Contoh 5 - Argument passed and a Return Value ===============\n");
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    // n is passed to the checkPrimeNumber() function
    // the returned value is assigned to the flag variable
    flag = checkPrimeNumber2(n);
    if(flag == 1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
    printf("\n=============== Contoh 5 - Argument passed and a Return Value ===============\n\n");

    return 0;
}

// Contoh 1 - Ini prototype
int addNumbers(int a, int b){
    int result;
    result = a + b;
    return result;
}

// Contoh 2 - No Argument passed and No Return value
void checkPrimeNumber() {
    
    int n, i, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}

// Contoh 3 - No Argument passed BUT a Return value
int getInteger() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    return n;
}

// Contoh 4 - Argument passed BUT No Return Value
// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n) 
{
    int i, flag = 0;
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is not a prime number.",n);
    else
        printf("%d is a prime number.", n);
}

// Contoh 5 - Argument passed and a Return Value
int checkPrimeNumber2(int n) {
    int i;
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            return 1;
    }
    return 0;
}