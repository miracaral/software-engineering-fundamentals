#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N,i,aranan;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);
    srand(time(0));

    int dizi[N];

    printf("Dizi elemanlari\n");
    for(i=0;i<N;i++)
    {
        dizi[i] = rand()%20;
    }
    printf("Dizi elemanlari\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    printf("Lutfen aranan sayiyi giriniz\n");
    scanf("%d",&aranan);

    for(i=0;i<N;i++)
    {
        if(dizi[i] == aranan)
        {
            printf("%d sayisi %d. sirada bulundu.\n",aranan,i+1);
            break;
        }
    }
    if(i == N)
    {
        printf("%d Bulunamadi\n",aranan);
    }


    return 0;
}