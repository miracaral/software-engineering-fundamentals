#include <stdlib.h>
#include <stdio.h>

int topla(int sayi)
{

    if(sayi == 1)
    {
        return 1;
    }
    else
    {
        return sayi+topla(sayi-1);
    }
}

int main()
{
    int n;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&n);
    printf("Toplam Sonucu = %d\n",topla(n));

    return 0;
}