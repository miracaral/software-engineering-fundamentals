#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,i,k,bosluk;

    printf("Lutfen satir sayisini giriniz.\n");
    scanf("%d", &satir);

    for(i = 1, k = 0; i <= satir; i++, k = 0)
    {
        for(bosluk = 1; bosluk <= satir - i; bosluk++)
        {
            printf("  ");
        }
        while(k != 2*i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}