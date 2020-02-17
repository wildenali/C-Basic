#include <stdio.h>

int main() {

    printf("\n=============== Contoh 1 ===============\n");
    int x[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("address x[%d] = %p\n", i, &x[i]);
    }
    printf("Address of array x: %p", x);
    printf("\n=============== Contoh 1 ===============\n\n");

    printf("\n=============== Contoh 2 ===============\n");
    int j, y[6], sum = 0;
    printf("Masukan 6 Angka: ");
    for (j = 0; j < 6; j++)
    {
        scanf("%d", y+j);   // Code ini sama aja kaya scanf("%d", &y[j])
        sum += *(y+j);      // Code ini sama kaya sum += y[i];
    }
    printf("Sum = %d", sum);
    printf("\n=============== Contoh 2 ===============\n\n");

    printf("\n=============== Contoh 3 ===============\n");
    int z[5] = {1,2,3,4,5};
    int* ptr;

    // prs is assigned the address of the third element
    ptr = &z[2];

    printf("*ptr = %d \n", *ptr);   // 3
    printf("*(ptr + 1) = %d \n", *(ptr + 1));   // 4
    printf("*(ptr - 1) = %d ", *(ptr - 1));   // 2
    printf("\n=============== Contoh 3 ===============\n\n");
    

    return 0;
}