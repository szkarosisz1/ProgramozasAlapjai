#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    srand(time(0));

    int i, array[10];
    int size = sizeof(array)/sizeof(int);
    int divider, counter, minindex;                     //divider -> osztó
    bool found;

    // tömb feltöltése 10 és 100 közé esõ számokkal
    for (i = 0; i < size; i++)
    {
        array[i] = rand()% 91+10;
        printf("%d. szam: %d\n", i+1, array[i]);
    }

    // legkisebb prímszám keresése
    counter = 0;
    for (i = 0; i < size; i++)
    {
        found = false;
        divider = 2;
        while (divider < sqrt(array[i]) && !found)
            {
                if (array[i]%divider==0)
                {
                    found = true;
                }

              divider++;
            }
         if (!found)                                             // ha prímszám
            {
                printf("Primszam: %d\n", array[i]);
                counter++;


                if (counter == 1)                                       // az elsõ prímszám esetén
                    {
                        minindex = i;
                    }

                else if (array[i] < array[minindex])
                    {
                        minindex = i;
                    }

            }

    }

     if (counter > 0)
        printf("A legkisebb primszam: %d\n", array[minindex]);
    else
        printf("Nincs primszám a listában\n");

    return 0;
}
