#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Az angol ABC betui kozul adjon meg egyet! ");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') ||
       (ch >= 'A' && ch <= 'Z'))
    {
        if(ch == 'a' || ch == 'e' ||
           ch == 'i' || ch == 'o' ||
           ch == 'u' || ch == 'A' ||
           ch == 'E' || ch == 'I' ||
           ch == 'O' || ch == 'U'
           )
        {
            printf("Maganhangzo!");
        }
        else
        {
            printf("Massalhangzo!");
        }
    }

    return 0;
}
