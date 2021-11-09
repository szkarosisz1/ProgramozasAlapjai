#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Egy geometriai programban körök adatait kell tárolni: középpont (x, y koordináta) és sugár.
//Állapítsa meg két körről, hogy azok átfedik-e egymást.
//Két kör akkor van átfedésben, ha középpontjaik távolsága kisebb, mint a sugaraik összege (Pitagorasz-tétel).

/*typedef struct kor{
        double x, y, r;
}Kor;*/

Typedef struct kor{
        double x, y;
}Pont;

Typedef struct kor{
        Pont kp;
        double r;
}Kor;


void beolvas(Kor *k){
    printf("Kerem a kor adatait (x y r formaban)");
    scanf("%lf%lf%lf",&k->kp.x,&k->kp.y,&k->r);
    return ;
}

int atfed(Kor k1, Kor k2){
    return sqrt(pow(k1.kp.x - k2.kp.x,2)+pow(k1.kp.y - k2.kp.y,2)) < k1.r+k2.r;
}

int main(void)
{
    Kor a, b;
        
    beolvas(&a);
    beolvas(&b);
        
    printf("%s\n", atfed(a, b) ? "Atfedik egymast" : "Nem fedik at egymast.");
    return 0;
}
