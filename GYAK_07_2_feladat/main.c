#include <stdio.h>
#include <stdlib.h>

//2. feladat
//K�t eg�sz sz�m felcser�l�se f�ggv�ny haszn�lat�val.

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
