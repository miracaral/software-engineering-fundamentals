#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct ogrenci_bilgi
    {
        int no;
        char ad[10];
        char soyad[10];
        int yas;
    };

    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=522;
    strcpy(ogrenci_bilgi.ad,"Mirac");
    strcpy(ogrenci_bilgi.soyad,"Aral");
    ogrenci_1.yas=18;

    ogrenci_2 = ogrenci_1;
    return 0;
}