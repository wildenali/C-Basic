#include <stdio.h>
#include <string.h>

int countA = 0, countB = 0, count1 = 0, count2 = 0;
int countAA = 0, countBB = 0;   count11 = 0, count22 = 0;

int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
	char search1[] = "AKUN_ID";
	char search2[] = "TOKO_ID";

    char baper1[] = "";
    char baper2[] = "";
    int i, j, x, y, l, l1, l2, l3;
    int ii, jj;
    l1 = 255;//strlen(str);
    
    l2 = strlen(search1);
    l3 = strlen(search2);
    
    i = 0; 
    while (i < l1)
    {
        j = 0;
        countA = 0;
        countB = 0;
        while ((str[i] == search1[j]))
        {
            printf("%d %c\n", i, str[i]);
            countA++;   i++;    j++;
        }
        if (countA == l2)
        {
            count1++;   countA = 0;
            printf("AAAAAAAAAAAAAAAAAA %d\n", i);
            
            /*// disini mau ngehitung/ngecheck ada ga si CUSTOMER_ID dan ada berapa CUSTOMER_ID di array setelah ii
            int ii = i;
            while (ii < l1)
            {
                jj = 0;
                countAA = 0;
                countBB = 0;
                while ((str[ii] == search2[jj]))
                {
                    printf("%d %c\n", ii, str[ii]);
                    countAA++;   ii++;    jj++;
                }
                
                if (countAA == l2)
                {
                    count11++;   countAA = 0;
                }
                else
                    ii++;
            }
            printf("%s occurs %d times \n", search2, count11);
            */
            
            // if(count1 == 2){
            //     int panjangNYA = 0;
            //     int p = i;
            //     while(p < l1){
            //         if(str[p] == 'C'){
            //             panjangNYA = p;
            //             break;
            //         }
            //         p++;    
            //     }
            //     printf("data ke: %d\n", p);
            //     int m = 0;
            //     int o = i;
            //     while(o < panjangNYA){
            //         baper1[m] = str[o];
            //         printf("BBB %d %c \n", o, baper1[m]);
            //         m++;
            //         o++;
            //     }
            // }
        }
        else
            i++;
        if(str[i] == 'C'){
            while ((str[i] == search2[j]))
            {
                printf("%d %c\n", i, str[i]);
                countB++;   i++;    j++;
            }
            if (countB == l3)
            {
                count2++;   countB = 0;
            }
        }
    }
    printf("\n");
    
    printf("%s occurs %d times \n", search1, count1);
    printf("%s occurs %d times \n", search2, count2);
    printf("baper1 %s \n", baper1);
    
    
    
	return 0;
}
