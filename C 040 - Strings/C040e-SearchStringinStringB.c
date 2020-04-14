#include <stdio.h>
#include <string.h>

int countA = 0, countB = 0, count1 = 0, count2 = 0;

int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
	char search1[] = "AKUN_ID";
	char search2[] = "TOKO_ID";

    int i, j, l, l1, l2, l3;
    l1 = 255;//strlen(str);
    
    l2 = strlen(search1);
    l3 = strlen(search2);
    for (i = 0; i < l1;)
    {
        j = 0;
        countA = 0;
        countB = 0;
        while ((str[i] == search1[j]))
        {
            countA++;   i++;    j++;
        }
        if (countA == l2)
        {
            count1++;   countA = 0;
        }
        else
            i++;
    }
    
    
    for (i = 0; i < l1;)
    {
        j = 0;
        countB = 0;
        while ((str[i] == search2[j]))
        {
            countB++;   i++;    j++;
        }
        if (countB == l3)
        {
            count2++;   countB = 0;
        }
        else
            i++;
    }
    printf("%s occurs %d times \n", search1, count1);
    printf("%s occurs %d times \n", search2, count2);
    
    
    
	return 0;
}
