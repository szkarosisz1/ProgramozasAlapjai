#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define kerdojel 63       // '?' billentyû ASCII kódja op.rendszerben
#define N 100

//2. feladat a)
//a) A szöveg megfordítása.

void beolvas(char *szoveg);
char* forditvamasol(const char *forras, char *cel);
char* megfordit(char *szoveg);
void forditvakiir(char *szoveg);
int ebetuk(char *szoveg);

int main()
{
    char szoveg[N], forditott[N];
    beolvas(szoveg);
    printf("A beolvasott szoveg:\n%s", szoveg);

    char *p;
    p = forditvamasol(szoveg, forditott); //'p' a fordított karaktertömb elejére mutat
    printf("\nA szoveg megforditva:\n%s", p);

    int db = ebetuk(szoveg);
    printf("\nA szovegben %d db 'e' betu van.", db);

    return 0;
}

void beolvas(char *szoveg)
{
     int i = 0;
     char ch;
     printf("Esc+Enter lenyomasaig olvassa a karaktereket:\n");
     while ((ch=getchar()) != kerdojel)
     { // lehet benne szóköz
        szoveg[i] = ch;
        i++;
     }
     szoveg[i] = '\0';
     return ;
}

char* forditvamasol(const char *forras, char *cel)
{
     char *seged = cel;
     int i = strlen(forras)-1;

     while (i >= 0)
     {
        *cel = forras[i];
        cel++;
        i--;
     }

     *cel = '\0';
     return seged;
}

//Szöveg megfordítása helyben:

char* megfordit(char *szoveg)
{
     char *p = szoveg;
     char seged;
     int i, j;
     for(i = 0, j = strlen(szoveg)-1; i< strlen(szoveg)/2; i++, j--)
     {
         seged = szoveg[i];
         szoveg[i] = szoveg[j];
         szoveg[j] = seged;
     }
     return p;
}

//Szöveg fordított kiírása:
void forditvakiir(char *szoveg)
{
     int i;
     for(i = strlen(szoveg) - 1; i >= 0; i--)
     {
         printf("%c", szoveg[i]);
     }
     printf("\n");
     return ;
}

int ebetuk(char *szoveg)
{
    int db = 0;

    while(*szoveg)
    {
        if(*szoveg == 'e')
        {
            db++;
        }
        szoveg++;
    }
    return db;
}


