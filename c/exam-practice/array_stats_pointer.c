#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    int dizi[100];
    int *p = dizi;
    int max,min,toplam=0; 
    float ort;

    for(int i=0; i<100; i++)
    {
        printf("Lutfen %d. eleman degerini giriniz: ", i+1);
        scanf("%d", p+i);
        toplam = toplam + *(p+i);

    }
    for(int i=0; i<100; i++)
    {
        if(i==0)
        {
            max = *(p+i);
            min = *(p+i);
        }
        else
        {
            if(*(p+i) > max) max = *(p+i);
            if(*(p+i) < min) min = *(p+i);
        }
    }


    ort = (toplam - (max+min)) / 98.0; // en son hallet
    printf("Ortalama: %.2f\n", ort);
    printf("Toplam: %d\n", toplam);
}