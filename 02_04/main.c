#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, oszto, darab = 0;
    printf("Kerek egy szamot: ");
    scanf("%d",&szam);

    oszto = 1;

    /*while(oszto <= szam)
    {
        if(szam % oszto == 0)
        {
            darab++;
        }
        oszto++;
    }*/

    for(oszto = 1; oszto <= szam; oszto++)
    {
        if(szam % oszto == 0)
        {
            darab++;
        }
    }

    printf("\nOsztok szama %d\n", darab);

    return 0;
}
