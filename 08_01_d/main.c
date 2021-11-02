#include <stdio.h>
#include <stdlib.h>

//1. feladat d)
// d) A tömbelemek átlagának kiszámítása és az átlagtól való eltérés kiírása.

void beolvas(float *tomb, int meret);
float atlagol(float tomb[], int meret);
void eltereskiir(float tomb[], int meret, float atlag);


int main()
{
    int i, n = 12;
    float tomb[12];
    beolvas(tomb, n);
    float atlag = atlagol(tomb, n);
    printf("\nAtlag: %.2f\n", atlag);
    printf("Atlagtol valo elteresek:\n");
    eltereskiir(tomb, n, atlag);
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
        }while(!ok);
    }
    return ;
}

float atlagol(float tomb[], int meret)
{
    float eredmeny, sum=0.0;
    int i;
    for(i = 0; i < meret; i++)
    {
        sum += tomb[i];
    }
    eredmeny = sum/meret;
    return eredmeny;
}

void eltereskiir(float tomb[], int meret, float atlag)
{
     int i;

     for (i=0; i<meret; i++)
     {
         printf("%d. \t %.2f HUF/EUR \t %.2f\n", i+1, tomb[i], tomb[i]-atlag);
     }

     printf("\n");
     return ;
}



