#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hatvanyA, hatvanyK, i;
    long int eredmeny = 1;

    printf("Kerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");
    scanf("%d, %d", &hatvanyA, &hatvanyK);

    for(i = 1; i <= hatvanyK; i++)
    {
        eredmeny *= hatvanyA;
    }

    printf("\nA(z) %d %d. hatvanya: %ld\n", hatvanyA, hatvanyK, eredmeny);

    return 0;
}
