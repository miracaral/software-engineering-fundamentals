#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
    char ad[10],soyad[20];
    int no;
    int sinif;

};

int main()
{
    struct ogrenci ogr;
    printf("Lutfen ogrenci numarasini giriniz\n");
    scanf("%d",&ogr.no);

    if(ogr.no==2019)
    {
        ogr.no=2019;
        strcpy(ogr.ad,"Can");
        strcpy(ogr.soyad,"Boz");
        ogr.sinif=5;

        printf("\nNo: %d",ogr.no);
        printf("\nAdi: %s",ogr.ad);
        printf("\nSoyadi: %s",ogr.soyad);
        printf("\nSinif: %d",ogr.sinif);

    }

    return 0;
}