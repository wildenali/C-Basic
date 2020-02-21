#include <stdio.h>

struct mahasiswa {
    char firstName[50];
    int NIM;
    float IPK;
} s[10];

int main() {

    int i;
    printf("Enter information of Mahasiswa\n");

    //storing information
    for (i = 0; i < 5; i++)
    {
        s[i].NIM = i + 1;
        printf("\nFor NIM %d,\n",s[i].NIM);
        printf("Enter First Name: ");
        scanf("%s", s[i].firstName);
        printf("Enter IPK: ");
        scanf("%f", &s[i].IPK);
    }

    printf("\n\nTampilkan Info Mahasiswa\n\n");

    // displaying information
    for (i = 0; i < 5; i++)
    {
        printf("\nRoll Number: %d\n", i + 1);
        printf("First Name: ");
        puts(s[i].firstName);
        printf("IPK: %.1f", s[i].IPK);
        printf("\n");
    }


    return 0;
}