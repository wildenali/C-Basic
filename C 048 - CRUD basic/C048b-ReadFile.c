#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    FILE *fptr;
    if ((fptr = fopen("D://Upgrade Yourself/wildenali github/C-Basic/C 048 - CRUD basic/C048a-CreateWriteFile.txt","r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr,"%d",&num);

    printf("Value of n = %d", num);
    fclose(fptr);
    

    return 0;
}