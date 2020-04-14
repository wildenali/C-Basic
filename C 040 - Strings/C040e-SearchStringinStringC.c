#include <stdio.h>
#include <string.h>

int countA = 0, countB = 0, count1 = 0, count2 = 0;

int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
	char search1[] = "AKUN_ID";
	char search2[] = "TOKO_ID";

    char baper[] = "";
    int i, j, x, y, l, l1, l2, l3;
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
            printf("%d %c\n", i, str[i]);
            countA++;   i++;    j++;
        }
        if (countA == l2)
        {
            printf("AAAAAAAAAAAAAAAAAA\n");
            count1++;   countA = 0;
            printf("%d\n", i);
            
            if(count1 == 2){
                int panjangNYA = 0;
                int p = i;
                while(p < 255){
                    if(str[p] == 'C'){
                        panjangNYA = p;
                        break;
                    }
                    p++;
                }
                printf("data ke: %d\n", p);
                for(int o = i; o < panjangNYA; o++){
                    baper[o] = str[o];
                    printf("%d %c\n", o, baper[o]);
                }
            }
            
            // for(int q = 1; q <= l2; q++){
            //     printf("%d %c\n", q, str[q]);
            // }
        }
        else
            i++;
        
        
            // printf("count2 %d\n", count2);
            
            //if(count1 == 2 && baper == "CUSTOMER_ID"){
            // if(count1 == 2){
                // printf("%d %c\n", i, str[i]);
            // }
    }
    
    // for (x = 0; x < l1;)
    // {
    //     y = 0;
    //     countB = 0;
    //     while ((str[x] == search2[y]))
    //     {
    //         countB++;   x++;    y++;
    //     }
    //     if (countB == l3)
    //     {
    //         count2++;   countB = 0;
    //     }
    //     else
    //         x++;
    // }
    
    // if(count2 == 1){
        
    // }
    printf("%s occurs %d times \n", search1, count1);
    printf("%s occurs %d times \n", search2, count2);
    
    
    
	return 0;
}
