#include <stdio.h>
#include <string.h>



int main()
{
    char str[] = "\x00??\x01010143650007371 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore ACCOUNT_ID764229 magna aliqua.ACCOUNT_ID123456CUSTOMER_ID987654dolore magna aliqua";

    int lenStr;
    int lenSearchACCOUNT_ID, lenSearchCUSTOMER_ID;
    int checkLenSearchACCOUNT_ID, checkLenSearchCUSTOMER_ID;
	int LastPosofACCOUNT_ID, FirstPosofACCOUNT_ID;
	int FirstPosCUSTOMER_ID, LastPosCUSTOMER_ID;
	int ii, j;

	char searchACCOUNT_ID[] = "ACCOUNT_ID";
	char searchCUSTOMER_ID[] = "CUSTOMER_ID";
    char buffACCOUNT_ID[] = {0};
    char buffCUSTOMER_ID[] = {0};
    
    lenStr = 255;
    lenSearchACCOUNT_ID = strlen(searchACCOUNT_ID);
    lenSearchCUSTOMER_ID = strlen(searchCUSTOMER_ID);
    
    ii = 0;
    while (ii < lenStr)
    {
        j = 0;
        checkLenSearchACCOUNT_ID = 0;
        checkLenSearchCUSTOMER_ID = 0;
        while ((str[ii] == searchACCOUNT_ID[j]))
        {
            checkLenSearchACCOUNT_ID++;
            ii++;
            j++;
        }
        if (checkLenSearchACCOUNT_ID == lenSearchACCOUNT_ID)
            FirstPosofACCOUNT_ID = ii;
        else
            ii++;
            
        if(str[ii] == 'C'){      // nge cek apakah setelah C adalah U trus S->T->O->M->E->R->_->I->D
            checkLenSearchACCOUNT_ID = 0;
            while ((str[ii] == searchCUSTOMER_ID[j]))
            {
                checkLenSearchCUSTOMER_ID++;
                ii++;
                j++;
            }
            if (checkLenSearchCUSTOMER_ID == lenSearchCUSTOMER_ID)
            {
                LastPosofACCOUNT_ID = ii - 11;       // kenapa 11, karena CUSTOMER_ID  ada 11 biji
                FirstPosCUSTOMER_ID = ii;
                while(ii < lenStr){
                    if ((str[ii] >= 'a' && str[ii] <= 'z') || (str[ii] >= 'A' && str[ii] <= 'Z'))
                    {
                        LastPosCUSTOMER_ID = ii;
                        break;
                    }
                    else{
                        ii++;
                    }
                }
            }
        }
    }
    
    printf("\n");
    j = 0;
    ii = FirstPosofACCOUNT_ID;
    while (ii < LastPosofACCOUNT_ID) {
        buffACCOUNT_ID[j] = str[ii];
        printf("%d buffACCOUNT_ID[%d] %c \n", ii, j, buffACCOUNT_ID[j]);
        ii++;
        j++;
    }
    printf("buffACCOUNT_ID %s \n", buffACCOUNT_ID);
    
    j = 0;
    ii = FirstPosCUSTOMER_ID;
    while (ii < LastPosCUSTOMER_ID) {
        buffCUSTOMER_ID[j] = str[ii];
        printf("%d buffCUSTOMER_ID[%d] %c \n", ii, j, buffCUSTOMER_ID[j]);
        ii++;
        j++;
    }
    printf("buffCUSTOMER_ID %s \n", buffCUSTOMER_ID);
    
    printf("FirstPosofACCOUNT_ID %d\n", FirstPosofACCOUNT_ID);
    printf("LastPosofACCOUNT_ID %d\n\n", LastPosofACCOUNT_ID);
    printf("FirstPosCUSTOMER_ID %d\n", FirstPosCUSTOMER_ID);
    printf("LastPosCUSTOMER_ID %d\n\n", LastPosCUSTOMER_ID);
    

    
    
	return 0;
}
