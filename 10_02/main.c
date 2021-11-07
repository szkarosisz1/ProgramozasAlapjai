#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Egy geometriai programban k�r�k adatait kell t�rolni: k�z�ppont (x, y koordin�ta) �s sug�r.
//�llap�tsa meg k�t k�rr�l, hogy azok �tfedik-e egym�st.
//K�t k�r akkor van �tfed�sben, ha k�z�ppontjaik t�vols�ga kisebb, mint a sugaraik �sszege (Pitagorasz-t�tel).

typedef struct kor{
        double x, y, r;
}Kor;

void beolvas(Kor *k){
    scanf("%lf%lf%lf",&k->x,&k->y,&k->r);
    return ;
}

int atfed(Kor k1, Kor k2){
    return sqrt(pow(k1.x - k2.x,2)+pow(k1.y - k2.y,2))<k1.r+k2.r;
}

int main(void)
{
    Kor a, b;
    beolvas(&a);
    beolvas(&b);
    printf("%s\n", atfed(a, b) ? "Atfedik egymast" : "Nem fedik at egymast.");
    return 0;
}
