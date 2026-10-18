#include <stdio.h>
#include <stdlib.h>

/*

Hali Tipleri    Kodu     Metrekare fiyatı

Twetty          T               18
Bugs            B               17
Spiderman       S               19

*/

int main()
{
    char kod;
    float alan,fiyat = 0;

    printf("Lutfen Hali tipi (T B S) seciniz.\n");
    scanf("%c", &kod);
    printf("Alani giriniz.\n");
    scanf("%f", &alan);

    if(kod == 'T')
    {
        fiyat = 18 * alan;
        printf("Hali maliyeti: %f", fiyat);
    }
    else if (kod == 'B')
    {
        fiyat = 17 * alan;
        printf("Hali maliyeti: %f", fiyat);
    }
    else if (kod == 'S')
    {
        fiyat = 19 * alan;
        printf("Hali maliyeti: %f", fiyat);
    }
    else
    {
        printf("Yanlis hali tipi girdiniz.\n");
    }

    return 0;
}