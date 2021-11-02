#include <stdio.h>
#include <stdlib.h>

//1. feladat c
// c) Annak megállapítása, hogy a tömb elemei monoton növõ sorozatot alkotnak-e.

void beolvas(float *tomb, int meret);
int monoton_e(float *tomb, int meret);   //1-t (igaz) vagy 0-t (hamis) ad visssza


int main()
{
    int i, n = 12;
    float tomb[12];
    beolvas(tomb, n);
    //Monotonitás vizsgálata
    if ( monoton_e(tomb, n) )
    {
        printf("Az Euro arfolyama monoton nott.");
    }
    else
    {
        printf("A szamsorozat nem monoton novo.");
    }
    return 0;
}

void beolvas(float *tomb, int meret)
{
     int i, ok;
     char ch;
     for(i = 0; i < meret; i++)
     {
        do
        {
            ok = 1;
            printf("%d. ertek: ", i+1);
            if (scanf("%f", &tomb[i])!=1)
            {
                printf("Hibás input\n");
                ok = 0;
            }
        while ((ch=getchar()) != '\n');
        } while ( !ok );
     }
     return ;
}


int monoton_e(float *tomb, int meret)
{
    int i;
    for(i = 0; i < meret; i++)
    {
        if(tomb[i-1] > tomb[i])
        {
            return 0;
        }
    }
    return 1;
}
