#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sayi[100],ortalama,toplam = 0.0;

    printf("Kac tane sayi gireceksiniz.\n");
    scanf("%d",&n);

    while(n >= 100 || n <= 0)
    {
         printf("Kac tane sayi gireceksiniz.\n");
         scanf("%d",&n);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d. sayim: ", i+1);
        scanf("%f", &sayi[i]);
        
    }
    for(i = 1; i < n; i++)
    {
        if(sayi[0] > sayi[i])
        {
            sayi[0] = sayi[i];
        } 
    }
    printf("En kucuk elemanim: %f", sayi[0]);
    return 0;
}