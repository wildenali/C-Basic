#include <stdio.h>
#include <stdlib.h>

/*
calloc() stands for contiguous allocation (alokasi yg berdekatan)

The malloc() function allocates memory and leaves the memory 
uninitialized. Whereas, the calloc() function allocates memory 
and initializes all bits to zero.

ptr = (castType*) calloc(n, size);

example
ptr = (float*) calloc(25, sizeof(float));

The above statement allocates contiguous space in memory for
25 elements of type float.

*/



int main() {

    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);


    return 0;
}