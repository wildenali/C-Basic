#include <stdio.h>

int main() {

    int n, i, range;
    printf("\nEnter an Integer: ");
    scanf("%d", &n);
    printf("\nEnter an Range: ");
    scanf("%d", &range);

    for (i = 1; i <= range; ++i)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    

    return 0;
}