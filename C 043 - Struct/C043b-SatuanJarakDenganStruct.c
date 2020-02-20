#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
} dist1, dist2, sum;

int main() {

    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("\n2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;

    // adding inch
    sum.inch = dist1.inch + dist2.inch;

    printf("Sum of feet: %d\n", sum.feet);
    printf("Sum of inch: %.2f\n", sum.inch);
    


    return 0;
}