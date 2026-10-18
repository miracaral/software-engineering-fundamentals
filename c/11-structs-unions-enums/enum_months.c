#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ocak=1,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik,
}aylar;

void ayi_goster(aylar mirmo) //ayni sekilde mirmo da rastgele bir degisken
{
    switch(mirmo)
    {
        case ocak:
            printf("Ocak");
            break;

        case subat:
            printf("Subat");
            break;

        case mart:
            printf("Mart");
            break;
            
        case nisan:
            printf("Nisan");
            break;

        case mayis:
            printf("Mayis");
            break;

        case haziran:
            printf("Haziran");
            break;

        case temmuz:
            printf("Temmuz");
            break;

        case agustos:
            printf("Agustos");
            break;

        case eylul:
            printf("Eylul");
            break;

        case ekim:
            printf("Ekim");
            break;

        case kasim:
            printf("Kasim");
            break;

        case aralik:
            printf("Aralik");
            break;

        default:
        printf("Boyle bir ay yok");
        break;
        
    }
}

int main()
{
    aylar miro=11; //miro rastgele bir degisken ismidir akliniza gelen istediginiz her karakteri degisken yerine koyabilirsin
    ayi_goster(miro);
    return 0;
}
//enum içerisindeki butun degiskenler tamsayiya atanir!!!