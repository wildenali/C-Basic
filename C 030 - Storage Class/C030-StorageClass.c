#include <stdio.h>

/*
Every variable in C has two properties: type and storage class

Type refers to the data type of variable.
Storage class deterimnes the scope

Thera are 4 types of storage class:
1. automatic
2. external
3. static
4. register

*/

void display();

int main() {

    display();  // ini hasilnya 5
    display();  // ini hasilnya 11
    display();  // ini hasilnya 16


    return 0;
}

void display() {
    static int c = 1;
    c += 5;
    printf("%d ", c);
}