#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("10 adet rakam giriniz: \n");
    int rakam[10];
    int dizi1[10];
    int sayac = 0;
    int toplam = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &rakam[i]);

        if(rakam[i] > 1)
        {

            int dahaOnceVarMi = 0;
            for(int j = 0; j < sayac; j++)
            {
                if(dizi1[j] == rakam[i])
                {
                    dahaOnceVarMi = 1;
                    break;
                }
            }

            if(!dahaOnceVarMi)
            {
                dizi1[sayac] = rakam[i];
                sayac++;
            }
        }
    }

    for(int i = 0; i < sayac; i++)
    {
        toplam += dizi1[i];
    }

    printf("Dizi1'deki eleman sayisi: %d\n", sayac);
    printf("Dizi1 elemanlari: ");
    for(int i = 0; i < sayac; i++)
    {
        printf("%d ", dizi1[i]);
    }
    printf("\nElemanlarin toplami: %d\n", toplam);

    return 0;
}