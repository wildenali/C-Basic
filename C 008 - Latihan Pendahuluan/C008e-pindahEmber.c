#include <stdio.h>

int main() {

    double emberPertama, emberKedua, emberSementara;

    printf("Masukan air ke Ember pertama: ");
    scanf("%lf", &emberPertama);

    printf("Masukan air ke Ember kedua: ");
    scanf("%lf", &emberKedua);

    // Pindahin ke emberSementara dulu
    emberSementara = emberPertama;

    // pindahin emberKedua ke emberPertama
    emberPertama = emberKedua;

    // emberKedua diisi oleh emberSementara
    emberKedua = emberSementara;

    printf("\nSetelah di tuker, emberPertama menjadi: %.2lf", emberPertama);
    printf("\nSetelah di tuker, emberKedua menjadi: %.2lf\n\n", emberKedua);


    double pertalite, pertamax;
    printf("Enter pertalite: ");
    scanf("%lf", &pertalite);
    printf("Enter pertamax: ");
    scanf("%lf", &pertamax);
    // Swapping process
    pertalite = pertalite - pertamax;
    pertamax = pertalite + pertamax;
    pertalite = pertamax - pertalite;
    printf("Seletah diTuker, pertalite = %.2lf\n", pertalite);
    printf("Seletah diTuker, pertamax = %.2lf", pertamax);

    return 0;
}