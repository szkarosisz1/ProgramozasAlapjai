#include <stdio.h>
#include <stdlib.h>
#define N 12

int main()
{
    int i, ok;
    /*double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int meret = sizeof(tomb)/sizeof(double);   //tömb méretének kiszámítása
    double limit=300.0;*/

    double tomb[N];
    char c;

    /* Tömbelemek ellenõrzött beolvasása */

    printf("HUF/EUR arfolyamok:\n");
    for (i = 0; i < N; i++)
    {
        do {
            ok = 1;
            printf("%d. ertek: ", i+1);
         if (scanf("%lf", &tomb[i])!= 1)
         {
            printf("Hibas adat. Adja meg ujra:\n");
            ok = 0;
            while ((c = getchar()) != '\n') ;
        }
     } while(!ok || tomb[i] < 270 || tomb[i] > 320);                               //értékkorlátozás
     }

                    //Eldöntés algoritmus

     //Feltesszük, h. monoton növõ a sorozat, nincs a monotonitást elrontó érték
     int found = 0;

     /* Monotonitás vizsgálat */
     for (i = 1; i < N && !found; i++)
     {
        if (tomb[i] < tomb[i-1])
            found = 1;                                       //talált a monotonitást elrontó elemet
     }

     printf("A sorozat monoton novo: %s", !found ? "igaz" : "hamis");
        return 0;
    }
