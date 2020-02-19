#include <stdio.h>

int main() {

    printf("\n========== Contoh 1 - Membaca Kata ==========\n");
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);      // Bisa satu KATA, Kalimat tidak bisa
    printf("Your name is %s", name);
    printf("\n========== Contoh 1 - Membaca Kata ==========\n\n");

    return 0;
}