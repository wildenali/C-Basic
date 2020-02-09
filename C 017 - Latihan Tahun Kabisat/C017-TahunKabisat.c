#include <stdio.h>
/*
A leap year is exactly divisible by 4 except for century years 
(years ending with 00). The century year is a leap year only if 
it is perfectly divisible by 400.

For example,

1999 is not a leap year
2000 is a leap year
2004 is a leap year
*/

int main() {

    int year;
    printf("Masukan tahun: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            // the year is lead year if it is divisible by 400
            if (year % 400 == 0)
            {
                printf("%d is a leap year.", year);
            }
            else
            {
                printf("%d is NOT a leap year.", year);
            }
        }
        else
        {
            printf("%d is a leap year.", year);
        }
        
        
    }
    else
    {
        printf("%d is NOT a leap year.", year);
    }
    

    return 0;
}