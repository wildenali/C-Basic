#include <stdio.h>

int main() {

    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n=================== Pola 1 ===================\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n=================== Pola 1 ===================\n\n");

    printf("\n=================== Pola 2 ===================\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n=================== Pola 2 ===================\n\n");

    printf("\n=================== Pola 3 ===================\n");
    int space, k = 0;
    for (i = 1; i <= rows; i++, k=0)
    {
        for (i=1; i<=rows; ++i,k=0) {
            for (space=1; space<=rows-i; ++space)
                {
                    printf("  ");
                }
            while (k!=2*i-1) {
                printf("* ");
                ++k;
            }
            printf("\n");
        }
    }
    printf("\n=================== Pola 3 ===================\n\n");

    printf("\n=================== Pola 4 ===================\n");
    for (i=rows; i>=1; --i) {
        for (space=0; space<rows-i; ++space)
            printf("  ");
        for (j=i; j<=2*i-1; ++j)
            printf("* ");
        for (j=0; j<i-1; ++j)
            printf("* ");
        printf("\n");
    }
    printf("\n=================== Pola 4 ===================\n\n");

    printf("\n=================== Pola 5 ===================\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n=================== Pola 5 ===================\n\n");
    
    

    

    return 0;
}