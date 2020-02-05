#include <stdio.h>

int main() {
    double a, b, perkalian;

    printf("Masukan dua angka: ");
    scanf("%lf %lf", &a, &b);

    // Kalkulasi angkanya
    perkalian = a * b;

    // Hasil lebih dari 2 desimal, gunakan %.2lf
    printf("Perkalian = %.2lf", perkalian);

    return 0;

}