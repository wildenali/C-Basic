#include <stdio.h>

/*
In C programming, a struct (or structure) is a collection of
variables (can be of different types) under a single name.

struct structureName 
{
    dataType member1;
    dataType member2;
    ...
};

Access members of a structure
There are two types of operators used for accessing members
of a structure.

.   - Member operator
->  - Structure pointer operator (will be discussed in the next tutorial)

*/

// Contoh struct Pertama
struct Person
{
    char name[50];
    int citNo;
    float salary;
};

// Contoh struct Kedua
struct Orang
{
    char name[50];
    int citNo;
    float salary;
} person1, person2, p[20];  // person1 dst adalah struct Orang yg dibuat

int main() {


    return 0;
}


/*
Keyword typedef
We use the typedef keyword to create an alias name for data types.
It is commonly used with structures to simplify the syntax of
declaring variables.

This code

    struct Distance{
        int feet;
        float inch;
    };

    int main() {
        structure Distance d1, d2;
    }

is equivalent to

    typedef struct Distance{
        int feet;
        float inch;
    } distances;

    int main() {
        distances d1, d2;
    }
*/

/*
Nested Structures
You can create structures within a structure in C programming.
For example,

struct complex
{
 int imag;
 float real;
};

struct number
{
   struct complex comp;
   int integers;
} num1, num2;
Suppose, you want to set imag of num2 variable to 11.
Here's how you can do it:

num2.comp.imag = 11;
*/