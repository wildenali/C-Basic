#include <stdio.h>

int main() {

    char c;
    printf("Masukan karakter: ");
    scanf("%c", &c);

    // %d menampilkan nilai integer dari karakter tersebut
    // %c menampilkan karakternya
    printf("ASCII value of %c = %d , beralamat di %d", c, c, &c);

    return 0;
}