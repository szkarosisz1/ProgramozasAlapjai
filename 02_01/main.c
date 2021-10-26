#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerek egy egesz szamot: ");
    scanf("%d", &a);
    if(a % 2 == 0)
    {
      printf("Paros");
    }
    else
    {
      printf("Paratlan");
    }

    return 0;
}
