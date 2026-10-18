#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int *sayi) 
{
    int sonuc=1;
    int i;
    for(i=*sayi;i>=1;i--)
    {
        sonuc *= (*sayi); //esittir sonuc = sonuc * (*sayi)
        (*sayi)--;
    }
    return sonuc;
}

int main()
{
    int n,orijinalsayi;
    printf("Lutfen faktoriyeli alinacak sayiyi giriniz\n");
    scanf("%d",&n);
    orijinalsayi = n;
    printf("%d! = %d\n",orijinalsayi,faktoriyel(&n));

    return 0;
}