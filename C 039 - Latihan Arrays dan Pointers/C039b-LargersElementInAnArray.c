#include <stdio.h>

int main() {

    int i, n;
    float arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("Bilangan Terbesarnya adalah = %.2f", arr[0]);
    
    

    return 0;
}