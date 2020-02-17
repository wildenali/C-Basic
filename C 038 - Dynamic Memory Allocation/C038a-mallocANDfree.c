#include <stdio.h>
#include <stdlib.h>

/*
malloc() adalah memory allocation, berfungsi untuk menyimpan memory
dari jumlah byte yg ditentukan

ptr = (castType*) malloc(size)

contoh
ptr = (float*) malloc(100 * sizeof(float));

the above statement allocates 400 bytes of memory. its because
the size of float is 4 bytes. And, the pointer ptr holds the
address of the first byte in the allocated memory
*/

/*
free() untuk merilis alokasi ruangan memory

syntax of free()
free(ptr)
*/


int main() {

    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL)
    {
        printf("Error! memory not allocated");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    
    // deallocating the memory
    free(ptr);


    return 0;
}