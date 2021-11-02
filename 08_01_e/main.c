#include <stdio.h>
#include <stdlib.h>

//1. feladat e)
//e) A t�mb legkisebb elem�nek meghat�roz�sa. A legnagyobb elem meghat�roz�sa �n�ll� feladat.

void beolvas(float *tomb, int meret);
int minindex(float *tomb, int meret);

int main()
{
    int i, N = 12;
    float tomb[12];
    beolvas(tomb, N);
    int min = minindex(tomb, N);
    printf("\nLegkisebb elem: %.2f", tomb[min]);
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
            printf("Hib�s input\n");
            ok = 0;
          }
         while ((ch=getchar()) != '\n');
        }while(!ok);
    }
    return ;
}

int minindex(float *tomb, int meret)
{
    int i, mini = 0;     //mini: a legkisebb t�mbelem indexe
    for(i=0; i<meret; i++)
    {
        if(tomb[i]<tomb[mini])
        {
            mini = i;
        }
    }
    return mini;
}

