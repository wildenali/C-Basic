#include <stdio.h>

/*
The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
*/


int main() {

    int i, n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("===== Deret Fibonacci =====\n");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    


    return 0;
}