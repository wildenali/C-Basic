#include <stdio.h>
#include <string.h>



int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore AKUN_ID764229 magna aliqua.AKUN_ID123456TOKO_ID987654dolore magna aliqua";
    
    int lenStr;
    int lenSearchACCOUNT_ID, lenSearchCUSTOMER_ID;
    int checkLenSearchACCOUNT_ID, checkLenSearchCUSTOMER_ID;
	int LastPosofACCOUNT_ID, FirstPosofACCOUNT_ID;
	int FirstPosCUSTOMER_ID, LastPosCUSTOMER_ID;
	int i, j;

	char searchACCOUNT_ID[] = "AKUN_ID";
	char searchCUSTOMER_ID[] = "AKUN_ID";
    char buffACCOUNT_ID[] = {0};
    char buffCUSTOMER_ID[] = {0};
    
    lenStr = 255;
    lenSearchACCOUNT_ID = strlen(searchACCOUNT_ID);
    lenSearchCUSTOMER_ID = strlen(searchCUSTOMER_ID);
    
    i = 0;
    while (i < lenStr)
    {
        j = 0;
        checkLenSearchACCOUNT_ID = 0;
        checkLenSearchCUSTOMER_ID = 0;
        while ((str[i] == searchACCOUNT_ID[j]))
        {
            checkLenSearchACCOUNT_ID++;
            i++;
            j++;
        }
        if (checkLenSearchACCOUNT_ID == lenSearchACCOUNT_ID)
            FirstPosofACCOUNT_ID = i;
        else
            i++;
            
        if(str[i] == 'C'){      // nge cek apakah setelah C adalah U trus S->T->O->M->E->R->_->I->D
            checkLenSearchACCOUNT_ID = 0;
            while ((str[i] == searchCUSTOMER_ID[j]))
            {
                checkLenSearchCUSTOMER_ID++;
                i++;
                j++;
            }
            if (checkLenSearchCUSTOMER_ID == lenSearchCUSTOMER_ID)
            {
                LastPosofACCOUNT_ID = i - 11;       // kenapa 11, karena CUSTOMER_ID  ada 11 biji
                FirstPosCUSTOMER_ID = i;
                while(i < lenStr){
                    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                    {
                        LastPosCUSTOMER_ID = i;
                        break;
                    }
                    else{
                        i++;
                    }
                }
            }
        }
    }
    
    printf("\n");
    j = 0;
    i = FirstPosofACCOUNT_ID;
    while (i < LastPosofACCOUNT_ID) {
        buffACCOUNT_ID[j] = str[i];
        printf("%d buffACCOUNT_ID[%d] %c \n", i, j, buffACCOUNT_ID[j]);
        i++;
        j++;
    }
    printf("buffACCOUNT_ID %s \n", buffACCOUNT_ID);
    
    j = 0;
    i = FirstPosCUSTOMER_ID;
    while (i < LastPosCUSTOMER_ID) {
        buffCUSTOMER_ID[j] = str[i];
        printf("%d buffCUSTOMER_ID[%d] %c \n", i, j, buffCUSTOMER_ID[j]);
        i++;
        j++;
    }
    printf("buffCUSTOMER_ID %s \n", buffCUSTOMER_ID);
    
    printf("FirstPosofACCOUNT_ID %d\n", FirstPosofACCOUNT_ID);
    printf("LastPosofACCOUNT_ID %d\n\n", LastPosofACCOUNT_ID);
    printf("FirstPosCUSTOMER_ID %d\n", FirstPosCUSTOMER_ID);
    printf("LastPosCUSTOMER_ID %d\n\n", LastPosCUSTOMER_ID);
    

    
    
	return 0;
}
