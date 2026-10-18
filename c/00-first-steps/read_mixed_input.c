#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;

    float sayi2;

    char basharf;


    printf("lutfen isminizin basharfini giriniz\n");
    scanf(" %c",&basharf);

    printf("lutfen ilk sayiyi giriniz\n");
    scanf("%d",&sayi1);

    printf("lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&sayi2);


    printf("Ilk sayim:%d Ikinci sayim:%f Basharfim: %c", sayi1,sayi2,basharf);


    return 0;
}
