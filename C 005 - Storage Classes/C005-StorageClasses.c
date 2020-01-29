#include <stdio.h>

/*
auto: This is the default storage class for all the variables 
declared inside a function or a block
*/

/*
extern: Extern storage class simply tells us that the 
variable is defined elsewhere and not within the same 
block where it is used.
*/

/*
static: This storage class is used to declare static variables 
which are popularly used while writing programs in C language.
*/

/*
register: This storage class declares register variables 
which have the same functionality as that of the auto variables.
*/


int x = 89;

void autoStorageClass(){
    printf("\n------------------- Demonstrating Auto Class ------------------\n");

    // delcaring an auto variable
    auto int a = 32;
    printf("Nilai dari variable a yg dideklarasikan sebagai AUTO adalah %d\n",a);

    printf("---------------------------------------------------------------\n");
}

void registerStorageClass(){
    printf("\n------------- Demonstrating Register Storage Class -------------\n");

    // delcaring a register variable
    register char b = 'G';
    printf("Nilai dari variable b yg dideklarasikan sebagai REGISTER adalah %d\n", b);

    printf("---------------------------------------------------------------\n");
}

void externStorageClass(){
    printf("\n------------- Demonstrating Extern Storage Class -------------\n");

    // delcaring an extern variable
    extern int x;
    printf("Nilai dari variable x yg dideklarasikan sebagai Extern adalah %d\n", x);

    // value of extern cariable x modified
    x = 2;
    printf("Udah di modif nilainya x yg dideklarasikan sebagai Extern adalah %d\n", x);

    printf("---------------------------------------------------------------\n");
}

void staticStorageClass(){
    printf("\n------------- Demonstrating Static Storage Class -------------\n");

    // delcaring a static variable
    int i = 0;
    printf("Nilai dari variable x yg dideklarasikan sebagai Extern adalah %d\n", x);

    for (i = 0; i < 5; i++)
    {
        // Declaring the static variable y
        static int y = 5;

        // Declare a non-static variable p
        int p = 10;

        // Incrementing the value of y and p
        y++;
        p++;

        // printing value of y at each iteration 
        printf("\nThe value of 'y', "
               "declared as static, in %d "
               "iteration is %d\n", 
               i, y); 
  
        // printing value of p at each iteration 
        printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n", 
               i, p); 
    }
    

    printf("---------------------------------------------------------------\n");
}

int main() {

    // Demonstrate auto Storage Class
    autoStorageClass();

    // Demonstrate Register Storage Class
    registerStorageClass();

    // Demonstrate Extern Storage Class
    externStorageClass();
    
    // Demonstrate Static Storage Class
    staticStorageClass();

    return 0;
}