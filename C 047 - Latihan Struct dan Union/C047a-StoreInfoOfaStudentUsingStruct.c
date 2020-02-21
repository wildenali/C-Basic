#include <stdio.h>

struct Student
{
    char name[50];
    int NIM;
    float IPK;
} s;

int main() {

    printf("Enter Information\n");
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    
    printf("Enter NIM: ");
    scanf("%d", &s.NIM);
    
    printf("Enter IPK: ");
    scanf("%f", &s.IPK);

    printf("\nInformation:\n");
    printf("Nama: ");
    printf("%s", s.name);
    printf("NIM: %d\n", s.NIM);
    printf("IPK: %.1f\n", s.IPK);




    return 0;
}