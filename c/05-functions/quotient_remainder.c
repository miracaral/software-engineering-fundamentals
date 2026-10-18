#include <stdio.h>
#include <stdlib.h>

void bolmeislemi(int bolunen,int bolen)
{
    int kalan,bolum;
    kalan = bolunen % bolen;
    bolum = bolunen / bolen;
    printf("Kalan = %d\nBolum = %d\n\n",kalan,bolum);
}

int main()
{
    int bolunen,bolen;
    printf("Lutfen bolunen sayiyi giriniz.\n");
    scanf("%d",&bolunen);

    printf("Lutfen bolen sayiyi giriniz.\n");
    scanf("%d",&bolen);

    bolmeislemi(bolunen,bolen);
    return 0;
}