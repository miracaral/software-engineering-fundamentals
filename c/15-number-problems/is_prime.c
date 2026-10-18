#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{   
    int sayi,i;
    bool asalmi = true;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);

    if(sayi == 0 || sayi == 1)
    {
        asalmi = false;
    }
    for(i = 2; i <= sayi/2; i++)
    {
        if(sayi % i == 0)
        {
            asalmi = false;
            break;
        }
    }

    if(asalmi)
    {
        printf("%d sayimiz asaldir.",sayi);
    }
    else
    {
        printf("%d sayisi asal degildir.",sayi);
    }
    return 0;
}