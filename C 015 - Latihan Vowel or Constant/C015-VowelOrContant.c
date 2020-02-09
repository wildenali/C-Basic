#include <stdio.h>

int main() {

    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is lowercase
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 if variable c is uppercase
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase)
    {
        printf("%c is vowel", c);   // Vokal
    } else
    {
        printf("%c is consonant", c);   // Konsonan
    }
    
    

    return 0;
}