#include <stdio.h>

int main() {

    int tipeInteger;
    float tipeFloat;
    double tipeDouble;
    char tipeChar;

    printf("Size of Integer: %ld bytes \n", sizeof(tipeInteger));
    printf("Size of Float: %ld bytes \n", sizeof(tipeFloat));
    printf("Size of Double: %ld bytes \n", sizeof(tipeDouble));
    printf("Size of Char: %ld bytes \n", sizeof(tipeChar));

    int a;
    long b;   // equivalent to long int b;
    long long c;  // equivalent to long long int c;
    double e;
    long double f;
    printf("Size of int = %ld bytes \n", sizeof(a));
    printf("Size of long int = %ld bytes\n", sizeof(b));
    printf("Size of long long int = %ld bytes\n", sizeof(c));
    printf("Size of double = %ld bytes\n", sizeof(e));
    printf("Size of long double = %ld bytes\n", sizeof(f));

    return 0;
}