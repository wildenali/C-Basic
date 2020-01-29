#include <stdio.h>
#include <stdlib.h>

/*
Literal adalah jenis yang paling jelas dari konstanta,
Mereka digunakan untuk mengekspresikan nilai-nilai tertentu
dalam kode sumber dari sebuah program
*/

int main() {

    int x = 75;
    x = 0113;
    x = 0x4d;
    x = 0b110101;

    int y = 65; //Int
    y = 65u;    //Unsigned
    y = 65l;    //Long
    y = 65ul;   //Unsigned Long
    y = 65ll;   //Long Long
    y = 65ull;  //Unsigned Long
    y = 65llu;  //Unsigned Long Long

    return 0;

}