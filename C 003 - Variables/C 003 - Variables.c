#include <stdio.h>

// Variable declaration:
int a, b;
extern int c;
extern float f;

/*
Variabel eksternal adalah variabel global yang ada atau sudah dideklarasikan di dalam file lain.
variabel jenis ini biasa digunakan apabila program yang kita tulis berjumlah lebih dari satu file.
Cara membuat variabel eksternal adalah dengan menyertakan kata kunci extern di depan deklarasi
variabel bersangkutan
*/

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("%d + %d adalah %d \n",a, b, c);

   f = 70.0/3.0;
   printf("70 di bagi 3 : %f \n", f);
 
   return 0;
}