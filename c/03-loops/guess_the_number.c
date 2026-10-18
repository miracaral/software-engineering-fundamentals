#include <stdio.h>

int main()
{
    int asilSayi=65;
    int tahmin;
    int adim=0;
    printf("1-100 arasinda bir sayi tahmin edin:");
    while(1)
    {
        scanf("%d",&tahmin);
        if(tahmin==asilSayi)
        {
            printf("Tebrikler\n");
            adim++;
            break;
        }
        else if(tahmin>asilSayi)
        {
        
            printf("Daha kucuk bir sayi giriniz: ");
            adim++;
        }
        else
        {
            printf("Daha buyuk bir sayi giriniz: ");
            adim++;
        }

    }

    printf("Adim sayisi: %d\n",adim);
    return 0;
}


