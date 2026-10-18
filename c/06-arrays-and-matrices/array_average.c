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
        toplam = toplam + sayi[i]; //toplam += sayi[i]; equals!

    }
    ortalama = toplam / n;
    printf("Ortalama: %f", ortalama);
    return 0;
}