#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sure,ucret;
    printf("Telefon konusma suresi:\n");
    scanf("%f", &sure);

    if(sure <= 3)
    {
        ucret = 4;
    }
    else
    {
        ucret = 4 + (sure - 3)*1;
    }
    printf("Ucret: %.2f TL",ucret);

    return 0;
}