#include <stdio.h>
#include <stdlib.h>

int mukemmel(int n)
{
    int i=1;
    int toplam=0;

    while(i<n)
    {
        if(n % i == 0)
        {
            toplam = toplam + i;
        }
        i++;
    }
    if(toplam==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int sayi;
    int sonuc;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);
    sonuc = mukemmel(sayi);

    if(sonuc == 1)
    {
        printf("Sayi gercekten mukemmel\n");
    }
    else
    {
        printf("Sayi mukemmel degil\n");
    }

return 0;
}