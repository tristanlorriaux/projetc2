#include "blockchains.h"


void main(void)
{
    int c, n, r;
    Donnee data;
    printf("1. addBlock \n");
    printf("2. add n random block \n");
    printf("3. alterNthBlock \n");
    printf("4. printAllBlock\n");
    printf("5. verifyChain\n");
    printf("6. hackChain\n");
    while(1)
    {
        printf("Choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("Entrer message: \n");
                scanf("%s", &data.message);
                ajout_bloc(data);
                break;
            case 2:
                printf("How many blocks to enter?: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++)
                {
                    printf("Message à envoyer");
                    scanf("%s", &data.message);
                    ajout_bloc(data);
                }
                break;
            case 3:
                printf("wwhich block to alter?: \n");
                scanf("%d", &n);
                printf("enter message: ");
                scanf("%s", &data.message);
                alterNthBlock(n,data);
                break;
            case 4:
                printAllBlock();
                break;
            case 5:
                verifyChain();
                break;
            case 6:
                hackChain();
                break;
            default : break;
        }

    }
}