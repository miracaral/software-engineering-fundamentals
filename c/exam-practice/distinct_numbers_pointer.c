
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    int dizi[10];
    int *p1 = dizi;

    for(int i = 0; i < 10; i++)
    {
        printf("Lutfen %d. eleman degerini giriniz: ", i + 1);
        scanf("%d", p1 + i);
    }

    for(int i = 0; i < 10; i++)
    {
        int sayi = *(p1 + i);
        int adet = 0;

        int dahaOnceSayildi = 0;
        for(int k = 0; k < i; k++)
        {
            if(*(p1 + k) == sayi)
            {
                dahaOnceSayildi = 1;
                break;
            }
        }
        if(dahaOnceSayildi)
            continue;

        for(int j = 0; j < 10; j++)
        {
            if(*(p1 + j) == sayi)
                adet++;
        }
        if(adet > 1)
            printf("%d sayisi %d kez girildi.\n", sayi, adet);
    }

    return 0;
}