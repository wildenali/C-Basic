#include <stdio.h>

int main() {

    printf("\n================== Break Statement ==================\n");
    int i;
    double number, sum = 0.0;

    for (i = 0; i <= 10; i++)
    {
        printf("Enter a n%d: ", i);
        scanf("%lf", &number);
        // If the user enters a negative number, the loop ends
        if (number < 0.0)
        {
            break;
        }
        sum += number;
    }
    printf("Sum = %.2lf", sum);
    printf("\n================== Break Statement ==================\n\n");

    printf("\n================== Continue Statement ==================\n");
    number, sum = 0.0;
    for (i = 0; i <= 10; i++)
    {
        printf("Enter a n%d: ", i);
        scanf("%lf", &number);
        // If the user enters a negative number, the loop ends
        if (number < 0.0)
        {
            continue;
        }
        sum += number;
    }
    printf("Sum = %.2lf", sum);
    printf("\n================== Continue Statement ==================\n\n");
    

    return 0;
}