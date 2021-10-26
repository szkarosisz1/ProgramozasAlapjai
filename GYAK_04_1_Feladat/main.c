#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, telefondijTipus;
    double idoPercben, kulfoldi, halozatk, halozatb;
    kulfoldi = halozatk = halozatb = 0;
    printf("Hany adat lesz? ");
    scanf("%d", &N);
    int i = 1;

    while(i <= N)
    {
        printf("%d. hivas adatai: \n", i);
        printf("Tipus [1 - kulfoldi, 2 - halozaton kivuli, 3 - halozaton beluli]: ");
        scanf("%d", &telefondijTipus);
        printf("\nBeszelgetes ideje (percben): ");
        scanf("%lf", &idoPercben);
        i++;

        if(telefondijTipus == 1)
        {
            kulfoldi = kulfoldi + (idoPercben * 100);
        }
        else if(telefondijTipus == 2)
        {
            halozatk = halozatk + (idoPercben * 60);
        }
        else if(telefondijTipus == 3)
        {
            halozatb = halozatb + (idoPercben * 40);
        }
        else
        {
            printf("Nem definialt tipus!");
        }
    }


    printf("\nA szamla vegosszege: %.f (1) + %.f (2) + %.f (3) = %.f Ft\n",
    kulfoldi, halozatk, halozatb, kulfoldi+halozatk+halozatb);



    return 0;
}
