#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,tersi = 0,orjsayi,kalan;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);
    orjsayi = sayi;

    while(sayi != 0)
    {
        kalan = sayi % 10;
        tersi = tersi * 10 + kalan;
        sayi /= 10;
    }
    printf("Sayimizin tersi:%d\n",tersi);

    if(orjsayi == tersi)
    {
        printf("Sayimiz palendrom sayidir!\n");
    }
    else
    {
        printf("Sayimiz palendrom sayi degildir!\n");
    }

    return 0;
}
