#include <stdio.h>
#include <string.h>

// cara ngegabungin string

int main()
{
    char str1[] = "This is ", str2[] = "programiz.com";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1,str2);

    puts(str1);    
    // puts(str2); 

    return 0;
}