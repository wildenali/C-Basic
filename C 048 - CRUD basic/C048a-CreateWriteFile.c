#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    FILE *fptr;

    fptr = fopen("D://Upgrade Yourself/wildenali github/C-Basic/C 048 - CRUD basic/C048a-CreateWriteFile.txt","w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter Num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);
    

    return 0;
}