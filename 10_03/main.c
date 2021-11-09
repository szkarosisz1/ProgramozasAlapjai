#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

struct tomb{
  int eredmeny[N], db;
};

void tombFeltolt(int *tomb);
void tombKiir(struct tomb t);
struct tomb tombSzetvalogat(int *tomb, int paritas);


int main()
{
    int t[N];
    tombFeltolt(t);
  
    struct tomb paros = tombSzetvalogat(t, 0);
    struct tomb paratlan = tombSzetvalogat(t, 1);
  
    printf("\nParos elemek: ");
    tombKiir(paros);
  
    printf("\nParatlan elemek: ");
    tombKiir(paratlan);
  
    return 0;
}

void tombFeltolt(int *tomb){
    int i;
    srand(time(0));
  
    for(i = 0; i < N; i++)
        tomb[i] = rand()%100+1;
  
    return ;
}

void tombKiir(struct tomb t){
    int i;
  
    for(i = 0; i < t.db; i++)
        printf("%d, ",t.eredmeny[i]);
  
    return ;
}

struct tomb tombSzetvalogat(int *tomb, int paritas){
    struct tomb e;
    int i, j  = 0;
  
    for(i = 0; i < N; i++){
            if(tomb[i] % 2 == paritas){
                e.eredmeny[j] = tomb[i];
                j++;
            }
    }e.db = j;
  
    return e;
}

