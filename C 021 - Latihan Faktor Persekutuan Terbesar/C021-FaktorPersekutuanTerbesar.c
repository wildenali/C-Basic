#include <stdio.h>

int main() {

  printf("\n====================GCD Using FOR LOOP and IF Statement ====================\n");
  int n1, n2, i, gcd;
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  for (i = 1; i <= n1 && i <= n2; ++i)
  {
    if (n1%i == 0 && n2%i==0)   // chec if i is factor of both integers
    {
      gcd = i;
    }
  }
  printf("G.C.D of %d and %d is %d", n1, n2, gcd);
  printf("\n====================GCD Using FOR LOOP and IF Statement ====================\n\n\n");
	
  printf("\n====================GCD Using WHILE LOOP and IF Statement ====================\n");
  int n3, n4;
  printf("Enter two positive integers: ");
  scanf("%d %d", &n3, &n4);
  while (n3 != n4)
  {
    if (n3 > n4)
    {
      n3 -= n4;
    }
    else {
      n4 -= n3;
    }
    
  }
  
  printf("G.C.D = %d", n3);
  printf("\n====================GCD Using WHILE LOOP and IF Statement ====================\n");
  

    return 0;
}




/*
Greater Common Divisor (GCD) atau
Highest Common Factor (HCF) atau
Faktor Persekutuan Terbesar (FPB)
*/

/*
Mencari FPB dari 12 dan 20:

Faktor dari 12 = 1, 2, 3, 4, 6 dan 12
Faktor dari 20 = 1, 2, 4, 5, 10 dan 20
FPB dari 12 dan 20 adalah faktor sekutu (sama) yang terbesar, yaitu 4.
Mencari FPB dari 15 dan 25:

Faktor dari 15 = 1, 3, 5, dan 15
Faktor dari 25 = 1, 5, dan 25
FPB dari 15 dan 25 adalah faktor sekutu (sama) yang terbesar, yaitu 5.
*/

/*
Mencari FPB dari bilangan 147, 189 dan 231:

Buat pohon faktor dari masing-masing bilangan:
             147         189             231
              /\          /\              /\
             3 49        3  63           3  77
               /\           /\              /\
              7  7         7  9            7  11
                              /\
                             3  3

Susun bilangan dari pohon faktor utk mendapatkan faktorialnya:
Faktorial 147 = 31 x 72
Faktorial 189 = 33 x 71
Faktorial 231 = 31 x 71 x 111

Ambil faktor-faktor yang sekutu (sama) dari ketiga faktorial tersebut,
dalam hal ini 3 dan 7.

Kalikan faktor-faktor sekutu yang memiliki pangkat terkecil,
dalam hal ini 31 x 71 = 21.

Maka FPB dari bilangan 147, 189 dan 231 adalah 21.
Dengan kata lain, tidak ada bilangan yang lebih besar dari 21
yang dapat membagi habis bilangan 147, 189 dan 231.

Program yg ini coba untuk mencari faktorial dari 2 buah bilangan

*/