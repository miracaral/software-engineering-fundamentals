#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    int hisseler[10];
    int hisseSayisi = 10;
    int periyot;
    float periyotSonucu[9];

    printf("Lutfen 10 gunluk hisse degerlerini giriniz: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d. gun hisse degeri: ", i+1);
        scanf("%d", &hisseler[i]);
    }
    printf("\nKac gunluk periyot istersiniz?: ");
    scanf("%d",&periyot);

    if(periyot < 1 || periyot > 10)
    {
        printf("Periyot 1 ile 10 arasinda olmalidir.\n");
        return 1;
    }

    for(int i=0; i <= hisseSayisi - periyot; i++)
    {
        periyotSonucu[i] = 0;
        for(int j=i; j < i + periyot; j++)
        {
            periyotSonucu[i] += hisseler[j];
        }
        periyotSonucu[i] = periyotSonucu[i] / periyot;
        printf("%d. periyot sonucu: %.2f\n", i+1, periyotSonucu[i]);
    }

}