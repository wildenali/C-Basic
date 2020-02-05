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

    return 0;
}