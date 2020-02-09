#include <stdio.h>

/*
The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
*/


int main() {

    int i, n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    printf("===== Deret Fibonacci =====\n\n");

    printf("\n==================== Masukan angka sampai deret ke berapa ====================\n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n==================== Masukan angka sampai deret ke berapa ====================\n\n\n");


    printf("\n==================== Fibonacci sampai Nomor yg di Inginkan ====================\n");
    int m;
    int s1 = 0;
    int s2 = 1;
    int nexTerm = 0;
    scanf("%d", &m);
    printf("Fibonacci Ke: %d, %d, ", s1, s2);
    while (nexTerm <= m)
    {
        printf("%d, ", nexTerm);
        s1 = s2;
        s2 = nexTerm;
        nexTerm = s1 + s2;
    }
    printf("\n==================== Fibonacci sampai Nomor yg di Inginkan ====================\n");
    


    return 0;
}