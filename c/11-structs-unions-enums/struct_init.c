#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
    char ad[10];
    char soyad[10];
    int yas;
};

int main()
{
    struct ogrenci mirac;
    /* 2.YOL ===> struct ogrenci mirac={"Mirac","Aral",19}; */
    strcpy(mirac.ad,"Mirac");
    strcpy(mirac.soyad,"Aral");
    mirac.yas=19;

    printf("%s \t %s \t %d\n",mirac.ad,mirac.soyad,mirac.yas);

    return 0;
}