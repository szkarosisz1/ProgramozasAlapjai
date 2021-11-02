#include <stdio.h>
#include <stdlib.h>

//1. feladat:
//Írja meg egy egész szám ellenõrzött beolvasását megvalósító,
//valamint az egész számfaktoriálisát kiszámító függvényeket.


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
            printf("Hibás input\n");
            while ((ch = getchar()) != '\n');    //hibás karakterek kitolvasása input bufferbõl
            ok = 0;
        }

    }while( !ok || *x < 0 );

    return ;
}

int faktor(int x)
{
    //pozitív egész szám vagy 0 faktoriálisát számítja ki
     int fakt = 1;

     while(x > 1)
     {
        fakt *= x;
        x--;
     }

     return fakt;

}


