#include <stdio.h>

int main() {

    // ========== if ==========
    printf("\n========== if ==========\n");
    int number1;
    printf("Masukan tebakan angka: ");
    scanf("%d", &number1);

    // true if number is less than 0
    if (number1 == 5)
    {
        printf("Yey, Angkanya betuul: %d \n", number1);
    }
    printf("\n========== if ==========\n\n\n");


    // ========== if else ==========
    printf("\n========== if else ==========\n");
    int number2;
    printf("Masukan tebakan angka: ");
    scanf("%d", &number2);

    // true if number is less than 0
    if (number2 == 10)
    {
        printf("Yey, Angkanya betuul: %d \n", number2);
    }
    else
    {
        printf("Maaf angkanya SALAH\n");
    }
    printf("\n========== if else ==========\n\n\n");



    // ========== if else Ladder==========
    printf("\n========== if else Ladder ==========\n");
    int number3, number4;
    printf("Masukan 2 buah angka: ");
    scanf("%d", &number3);
    printf(" dan ");
    scanf("%d", &number4);

    if(number3 == number4) {
        printf("Result: %d = %d",number3,number4);
    }
    else if (number3 > number4) {
        printf("Result: %d > %d", number3, number4);
    }
    else {
        printf("Result: %d < %d",number3, number4);
    }
    printf("\n========== if else Ladder ==========\n\n\n");


    // ========== Nested if else ==========
    printf("\n========== if else Ladder ==========\n");
    int number5, number6;
    printf("Masukan 2 buah angka: ");
    scanf("%d %d", &number5, &number6);
    if (number5 >= number6) {
      if (number5 == number6) {
        printf("Result: %d = %d",number5,number6);
      }
      else {
        printf("Result: %d > %d", number5, number6);
      }
    }
    else {
        printf("Result: %d < %d",number5, number6);
    }
    printf("\n========== Nested if else ==========\n\n\n");


    return 0;
}