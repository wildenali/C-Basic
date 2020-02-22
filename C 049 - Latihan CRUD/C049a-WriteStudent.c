#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[50];
    int marks, i, num;
    
    printf("Enter number of students: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = fopen("D://Upgrade Yourself/wildenali github/C-Basic/C 049 - Latihan CRUD/C049a-WriteStudent.txt","w");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    for (i = 0; i < num; i++)
    {
        printf("For student %d\nEnter Name: ", i + 1);
        scanf("%s", name);

        printf("Enter Marks: ");
        scanf("%d", &marks);
        printf("\n");

        fprintf(fptr, "Name  : %s \nMarks : %d \n\n", name, marks);


    }
    fclose(fptr);
    

    return 0;
}