#include <stdio.h>
#include <stdlib.h>
#define BIRIM 150
#define EMEK 1000

int main()
{
    float metrekare,ucret;

    printf("Salonun metrekaresini giriniz.\n");
    scanf("%f", &metrekare);

    ucret = metrekare * BIRIM + EMEK;
    printf("Toplam maliyet: %.2f\n", ucret);

    return 0;
}