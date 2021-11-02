#include <stdio.h>
#include <stdlib.h>

//1. feladat:
//�rja meg egy eg�sz sz�m ellen�rz�tt beolvas�s�t megval�s�t�,
//valamint az eg�sz sz�mfaktori�lis�t kisz�m�t� f�ggv�nyeket.


void int_beolvas(int* x);
int faktor(int x);


int main()
{
    int szam;
    int_beolvas(&szam);
    printf("%d! = %d\n", szam, faktor(szam));
    return 0;
}

void int_beolvas(int* x)
{
    char ch;
    int ok;

    do
    {
        ok = 1;
        printf("Adj meg egy szamot: ");

        if(scanf("%d",x) != 1)
        {
            printf("Hib�s input\n");
            while ((ch = getchar()) != '\n');    //hib�s karakterek kitolvas�sa input bufferb�l
            ok = 0;
        }

    }while( !ok || *x < 0 );

    return ;
}

int faktor(int x)
{
    //pozit�v eg�sz sz�m vagy 0 faktori�lis�t sz�m�tja ki
     int fakt = 1;

     while(x > 1)
     {
        fakt *= x;
        x--;
     }

     return fakt;

}


