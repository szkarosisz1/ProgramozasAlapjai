#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ev;
    printf("Adjon meg egy evet: ");
    scanf("%d", &ev);

    if((ev % 4 == 0) && (ev % 100 != 0) || (ev % 400 == 0))
    {
        printf("Szokoev!");
    }
    else
    {
        printf("Nem szokoev!");
    }
    return 0;
}
