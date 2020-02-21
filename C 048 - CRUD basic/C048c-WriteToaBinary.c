#include <stdio.h>
#include <stdlib.h>

struct threeNum {
    int n1, n2, n3;
};

int main() {

    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr = fopen("D://Upgrade Yourself/wildenali github/C-Basic/C 048 - CRUD basic/C048c-WriteToaBinary.bin","wb")) == NULL)
    {
        printf("Error! Opening File");
        exit(1);
    }

    for (n = 1; n < 5; n++)
    {
        num.n1 = n;
        num.n2 = n*5;
        num.n3 = n*5 + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);
    
    

    return 0;
}