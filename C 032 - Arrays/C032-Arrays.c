#include <stdio.h>

int main() {

    printf("\n=============== Contoh 1 ===============\n");
    int values[5];

    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }

    printf("Displaying integers: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", values[i]);
    }
    printf("\n=============== Contoh 1 ===============\n\n");

    printf("\n=============== Contoh 2 ===============\n");
    int marks[10], i, n, sum = 0, avarage;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }
    avarage = sum/n;
    printf("Avarage = %d", avarage);
    printf("\n=============== Contoh 2 ===============\n\n");
    
    

    return 0;
}