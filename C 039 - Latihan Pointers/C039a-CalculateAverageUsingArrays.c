#include <stdio.h>

int main() {

    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Error! kebanyakan no nya, harus di antara 0-100 aja\n");
        printf("Coba lagi dong: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d. Masukan Angka: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);


    return 0;
}