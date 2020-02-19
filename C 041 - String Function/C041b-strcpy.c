#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10]= "awesome";
    char str2[10];
    char str3[10];

    puts(str1);
    puts(str2);
    puts(str3);

    printf("\nSetelah menggunakan strcpy\n");

    strcpy(str2, str1);
    strcpy(str3, "well");
    puts(str1);
    puts(str2);
    puts(str3);

    return 0;
}