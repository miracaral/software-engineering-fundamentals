#include <stdio.h>
#include <stdlib.h>

int fakt(int sayi)
{
    int sonuc;
    if(sayi!=0)
    {
        sonuc=sayi*fakt(sayi-1);
    }
    else
    {
        sonuc=1;
    }
    return sonuc;
}

int main()
{
    int n;
    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&n);
    printf("Faktoriyel = %d\n",fakt(n));

    return 0;
}