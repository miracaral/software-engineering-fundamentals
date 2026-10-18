#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2

int main()
{
    int kod;
    float fiyat;
    
    printf("Lutfen urunun fiyatini ve kodunu giriniz.\n");
    scanf("%f %d", &fiyat,&kod);

    printf("Urunumuzun satis fiyati:\n");
    
    switch(kod)
    {
        case KITAP: printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_kitap / 100);
        break;
        
        case TEMELGIDA: printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_temelgida / 100);
        break;

        case LUKS: printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_luks / 100);
        break;

        default: printf("Boyle bir urun yoktur.Girdiginiz kod yanlis!\n");
    }

    /* if(kod == KITAP)
    {
        printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_kitap / 100);
    }
    else if(kod == TEMELGIDA)
    {
        printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_temelgida / 100);
    }
    else if(kod == LUKS)
    {
        printf("Fiyatimiz: %f\n", fiyat + fiyat * VERGI_luks / 100);
    }
    else
    {
        printf("Boyle bir urun yoktur.Girdiginiz kod yanlis!\n");
    }
    return 0; */
}