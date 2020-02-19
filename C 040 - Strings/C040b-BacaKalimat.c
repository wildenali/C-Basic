#include <stdio.h>

int main() {

    printf("\n========== Contoh 2 - Membaca Kalimat ==========\n");
    char nama1[30];
    printf("Masukan nama: ");
    fgets(nama1, sizeof(nama1), stdin);     // Memaca Kalimat
    puts(nama1);
    printf("\n========== Contoh 2 - Membaca Kalimat ==========\n\n");

    return 0;

}