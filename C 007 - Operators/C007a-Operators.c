#include <stdio.h>
int main()
{
    printf("\n========== Arithmatic Operators ==========\n");
    int a = 9,b = 4, c;   
    c = a + b;
    printf("a+b = %d \n",c);
    c = a - b;
    printf("a-b = %d \n",c);
    c = a * b;
    printf("a*b = %d \n",c);
    c = a / b;
    printf("a/b = %d \n",c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n",c);
    printf("========== Arithmatic Operators ==========\n\n");


    printf("\n========== Increment dan Decrement Operators ==========\n");
    int d = 10, e = 100;
    float f = 10.5, g = 100.5;
    printf("++d = %d \n", ++d);
    printf("--e = %d \n", --e);
    printf("++f = %f \n", ++f);
    printf("--g = %f \n", --g);
    printf("========== Increment dan Decrement Operators ==========\n\n");


    printf("\n========== Assignemnt Operators ==========\n");
    int h = 5, i;
    i = h; 
    printf("i = %d\n", i);
    i += h;
    printf("i = %d\n", i);
    i -= h;
    printf("i = %d\n", i);
    i *= h;
    printf("i = %d\n", i);
    i /= h;
    printf("i = %d\n", i);
    i %= h;
    printf("i = %d\n", i);
    printf("========== Assignemnt Operators ==========\n\n");


    printf("\n========== Relational Operators ==========\n");
    a = 5, b = 5, c = 7;
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d >  %d is %d \n", a, b, a > b);
    printf("%d >  %d is %d \n", a, c, a > c);
    printf("%d <  %d is %d \n", a, b, a < b);
    printf("%d <  %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
    printf("========== Relational Operators ==========\n\n");


    printf("\n========== Logical Operators ==========\n");
    a = 5, b = 5, c = 10;
    int result;
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a == b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    printf("========== Logical Operators ==========\n\n");


    printf("\n========== sizeof Operators ==========\n");
    int r;
    float s;
    double t;
    char u;
    printf("Size of int = %lu bytes\n",sizeof(r));
    printf("Size of float = %lu bytes\n",sizeof(s));
    printf("Size of double = %lu bytes\n",sizeof(t));
    printf("Size of char = %lu byte\n",sizeof(u));
    printf("========== sizeof Operators ==========\n\n");

    return 0;
}