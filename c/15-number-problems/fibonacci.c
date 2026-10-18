#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sayi1 = 0, sayi2 = 1, sonraki;
    printf("Kac tane fibonacci sayisi istiyorsunuz?\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("%d ", sayi1);
            continue;
        }
        if(i == 2)
        {
            printf("%d ", sayi2);
            continue;
        }
        sonraki = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = sonraki;
        printf("%d ",sonraki);
    }
    return 0;
}