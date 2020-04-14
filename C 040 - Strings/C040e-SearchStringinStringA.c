#include <stdio.h>
#include <string.h>

int count = 0, count1 = 0;

int main()
{
	char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
	char search[] = "AKUN_ID";
	const char *ptr = strstr((const char *)&str, search);

    int i, j, l, l1, l2;
    l1 = 255;//strlen(str);
    l2 = strlen(search);
    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == search[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times ", search, count1);
    
	return 0;
}
