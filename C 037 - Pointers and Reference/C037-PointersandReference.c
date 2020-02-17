#include <stdio.h>

void swap(int *n1, int *n2);

void addOne(int* ptr);


int main() {

    printf("\n=============== Contoh 1 ===============\n");
    int num1 = 5, num2 = 10;
    // address of num1 and num2 is passed
    swap(&num1, &num2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    printf("\n=============== Contoh 1 ===============\n\n");

    printf("\n=============== Contoh 2 ===============\n");
    int* p, i = 10;
    p = &i;
    addOne(p);
    printf("%d", *p);
    printf("\n=============== Contoh 2 ===============\n\n");

    return 0;
}

void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void addOne(int *ptr) {
    (*ptr)++;   // adding 1 to *ptr
}