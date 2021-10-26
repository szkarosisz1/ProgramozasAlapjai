#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, sum = 0;
    printf("Kerek egy szamot: ");
    scanf("%d", &N);

    i = 1;

    /*while(i<=N)
    {
        sum  += i;             //WHILE-ciklus
        i++;
    }*/

    do
    {
        sum += N;
        N--;
    }
    while(N > 0);

    printf("Osszeg: %d", sum);
    return 0;
}
