#include <stdio.h>
#include <stdlib.h>

//2. feladat
//Két egész szám felcserélése függvény használatával.

void cserel(int *x, int *y);


int main()
{
    int a = 5, b = 10;
    cserel(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void cserel(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
