#include <stdio.h>
#include <stdlib.h>

int carpim(int sayi1,int sayi2) //sayi1 = 3,sayi2 = 5
{
    int sonuc;
    if(sayi2 == 1)
    {
        sonuc = sayi1;
    }
    else
    {
        sonuc = sayi1+carpim(sayi1,sayi2-1);
    }
    return sonuc;
}

int main()
{
    int a,b;
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&a,&b);
    printf("%d x %d = %d\n",a,b,carpim(a,b));
    return 0;
}