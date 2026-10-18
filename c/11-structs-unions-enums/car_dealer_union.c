#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct araba
    {
        int satis;
        union
        {
            double fiyat;
            char marka[20];
        }bilgi;
    };

    struct araba araba_A;

    araba_A.satis=0;
    strcpy(araba_A.bilgi.marka,"Anadol");

    araba_A.satis=1;
    araba_A.bilgi.fiyat=20000;
    return 0;
}