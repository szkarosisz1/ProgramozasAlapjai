#include <stdio.h>
#include <stdlib.h>

//3. feladat:
//Írjon C programot, amely megmondja egy megadott számról h. tökéletes-e.
//Tökéletes szám az szám, amely megegyezik a nála kisebb osztóinak összegével (Pl.: 6=1+2+3; 28, 496, 8128).

int main()
{
    int x;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &x);

    if (tokeletes(x))
        printf("\nA megadott szam tokeletes\n");
    else
    printf("\nA megadott szam nem tokeletes\n");
    //printf("%s", tokeletes(x) ? "Tokeletes szam" : "Nem tokeletes szam");
    return 0;
}

int tokeletes(int szam)
{
    if (szam == kisebboszto_osszeg(szam))
    {
        return 1;
    }

    return 0;
}

int kisebboszto_osszeg(int szam)
{
     int osszeg, oszto;
     osszeg=0;

     for (oszto=1; oszto<=szam/2; oszto+=1)
    {
        if (szam%oszto == 0)
            osszeg += oszto;
    }

    return osszeg;
}
