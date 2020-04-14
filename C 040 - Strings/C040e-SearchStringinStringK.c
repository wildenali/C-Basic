#include <stdio.h>
#include <string.h>

int countA = 0, countB = 0, count1 = 0, count2 = 0;
int countAA = 0, countBB = 0,   count11 = 0, count22 = 0;
int FirstPosCUSTOMER_ID = 0, LastPosCUSTOMER_ID = 0;

int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
	char search1[] = "AKUN_ID";
	char search2[] = "TOKO_ID";

    char baper1[] = {0};
    char baper2[] = {0};
    char baper3[] = {0};
    int i, j, x, y, l, l1, l2, l3;
    int ii, jj, LastPosofACCOUNT_ID, panjangNYA;
    int FirstPosofACCOUNT_ID;
    
    l1 = 255;//strlen(str);
    
    l2 = strlen(search1);
    l3 = strlen(search2);
    
    i = 0;
    LastPosofACCOUNT_ID = 0;
    FirstPosofACCOUNT_ID = 0;
    panjangNYA = 0;
    
    while (i < l1)
    {
        j = 0;
        countA = 0;
        countB = 0;
        while ((str[i] == search1[j]))
        {
            printf("A: %d %c\n", i, str[i]);
            countA++;   i++;    j++;
        }
        if (countA == l2)
        {
            
            count1++;
            FirstPosofACCOUNT_ID = i;
            printf("FirstPosofACCOUNT_ID %d\n", FirstPosofACCOUNT_ID);
            
        }
        else
            i++;
            
        if(str[i] == 'C'){      // nge cek apakah setelah C adalah U trus S->T->O->M->E->R->_->I->D
            countA = 0;
            while ((str[i] == search2[j]))
            {
                printf("B %d %c\n", i, str[i]);
                countB++;   i++;    j++;
            }
            if (countB == l3)
            {
                LastPosofACCOUNT_ID = i - 11;       // kenapa 11, karena CUSTOMER_ID  ada 11 biji

                count2++;   countB = 0;
                
                int m = 0;
                printf("First noKe: %d \n", i);
                FirstPosCUSTOMER_ID = i;
                while(i < l1){
                    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                    {
                        LastPosCUSTOMER_ID = i;
                        printf("Last noKe: %d, m: %d \n", LastPosCUSTOMER_ID, m);
                        break;
                    }
                    else{
                        printf("noKe: %d cusID %c m: %d \n", i, str[i], m);
                        i++;
                        m++;
                    }
                }
            }
        }
    }
    
    printf("\n");
    int iii = 0;
    int stereo = 0;
    for (iii = FirstPosofACCOUNT_ID; iii < LastPosofACCOUNT_ID; iii++) {
        baper1[stereo] = str[iii];
        printf("%d baper1 %c \n", iii, baper1[stereo]);
        stereo++;
    }
    printf("baper1 %s \n", baper1);
    
    int mono = 0;
    int iiii = 0;
    for (iiii = FirstPosCUSTOMER_ID; iiii < LastPosCUSTOMER_ID; iiii++) {
        baper2[mono] = str[iiii];
        printf("%d baper2 %c \n", iiii, baper2[mono]);
        mono++;
    }
    printf("baper2 %s \n", baper2);
    
    printf("FirstPosofACCOUNT_ID %d\n", FirstPosofACCOUNT_ID);
    printf("LastPosofACCOUNT_ID %d\n\n", LastPosofACCOUNT_ID);
    printf("FirstPosCUSTOMER_ID %d\n", FirstPosCUSTOMER_ID);
    printf("LastPosCUSTOMER_ID %d\n\n", LastPosCUSTOMER_ID);
    
    printf("%s occurs %d times \n", search1, count1);
    printf("%s occurs %d times \n", search2, count2);

    printf("baper1 %s \n", baper1);
    printf("baper2 %s \n", baper2);
    
    
    
	return 0;
}
