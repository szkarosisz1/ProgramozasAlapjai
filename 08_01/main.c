#include <stdio.h>
#include <stdlib.h>


//1. feladat:
//Az 5. gyakorlat 2. feladatát oldja meg a procedurális programtervezési alapelv betartásával, azaz
//minden végrehajtandó funkciót külön függvényben valósítson meg. Emlékeztetõ: A HUF/EUR
//árfolyamot kell nyilvántartani egy negyedéven keresztül hetente.

//1. feladat a) része
//a) A tömb elemeinek beolvasása ellenõrzött módon és kiírása.

void beolvas(float *tomb, int meret);
void kiir(float *tomb, int meret);

int main()
{
    const int n = 12;
    float tomb[12];
    beolvas(tomb, n);
    kiir(tomb, n);
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
            if(scanf("%f",&tomb[i])!=1)
            {
                printf("Hibas input!");
                ok = 0;
            }
            while(ch=getchar()!='\n');
        }while(!ok);
    }
    return ;
}

void kiir(float *tomb, int meret)
{
    int i;
    for(i = 0; i < meret; i++)
    {
        printf("%d. ertek: %d.2f \n",i+1,tomb[i]);
    }
    return ;
}
