#include <stdio.h>
#include <stdlib.h>

void saniyeyecevir(int saniye)
{
    int saat,dakika,sn,zaman;
    saat = saniye/3600;
    zaman = saniye%3600;
    dakika = zaman/60;
    sn = zaman%60;
    printf("%d:%d:%d\n",saat,dakika,sn);
}

int main()
{
    int saniye;
    printf("Lutfen saniye degerini giriniz\n");
    scanf("%d",&saniye);
    saniyeyecevir(saniye);
    return 0;
}