#include <stdio.h>
int main()
{
    printf("========== INTEGER ==========\n");
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    printf("\n========== INTEGER ==========\n\n");
 

    printf("\n========== FLOAT dan DOUBLE ==========\n");
    float num1;
    double num2;
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);
    printf("\n========== FLOAT dan DOUBLE ==========\n\n");


    printf("\n========== CHARACTER ==========\n");
    char chr1;
    printf("Enter a character: ");
    scanf("%c",&chr1);     
    printf("You entered %c.", chr1);

    char chr2;
    printf("Enter a character: ");
    scanf("%c", &chr2);     
    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr2);  
    // When %d is used, ASCII value is displayed
    printf("ASCII value is % d.", chr2);  
    printf("\n========== CHARACTER ==========\n");

    return 0;
}