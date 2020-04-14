#include <stdio.h>
#include <string.h>

int main(void) {
	char *str = "0010010010";
    char *what = "001";

    int what_len = strlen(what);
    int count = 0;

    char *where = str;

    if (what_len) 
       while ((where = strstr(where, what))) {
                where += what_len;
                count++;
            }
    printf("count = %d \n", count);
	return 0;
}
