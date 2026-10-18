#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,satir,sayi=1;

    printf("Lutfen satir sayisi giriniz.\n");
    scanf("%d", &satir);

    for(i = 1; i <= satir; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", sayi);
            sayi++;
        }
        printf("\n");
    }
    return 0;
}