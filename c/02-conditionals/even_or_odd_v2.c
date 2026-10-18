#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sonuc;

    printf("Sayi giriniz.\n");
    scanf("%d", &sayi);

    if(sayi % 2 == 1)
    {
        printf("Bu sayi tektir\n");
    }
    else if(sayi % 2 == 0)
    {
        printf("Bu sayi cifttir\n");
    }
    return 0;
}