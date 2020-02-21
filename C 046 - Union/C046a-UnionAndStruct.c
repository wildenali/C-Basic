#include <stdio.h>

union unionJob
{
    // defining union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    // defining union
    char name[32];
    float salary;
    int workerNo;
} sJob;


int main() {

    printf("size of union   = %d bytes\n", sizeof(uJob));       // 32 bytes
    printf("size of struct  = %d bytes", sizeof(sJob));         // 40 bytes 

    return 0;
}

/*
Here, the size of sJob is 40 bytes because

the size of name[32] is 32 bytes
the size of salary is 4 bytes
the size of workerNo is 4 bytes

However, the size of uJob is 32 bytes.
It's because the size of a union variable will always
be the size of its largest element. In the above example,
the size of its largest element, (name[32]), is 32 bytes.
*/