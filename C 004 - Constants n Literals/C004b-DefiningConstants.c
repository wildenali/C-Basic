#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
    int area;

    area = LENGTH * WIDTH;
    printf("Luas nya adalah : %d", area);
    printf("%c", NEWLINE);

    const int  Panjang = 10;
    const int  Lebar = 5;
    const char GarisBaru = '\n';
    int luas;  
    
    luas = Panjang * Lebar;
    printf("Luas area : %d", luas);
    printf("%c", NEWLINE);

    return 0;

}