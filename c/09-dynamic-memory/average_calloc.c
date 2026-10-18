#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *bellek;
    int N,i;
    float toplam=0;
    float ortalama;

    printf("Lutfen eleman sayisini giriniz\n");
    scanf("%d",&N);

    bellek = (int *)calloc(N,sizeof(int));
    for(i=0;i<N;i++)
    {
        printf("%d. sayi: ",i+1);
        scanf("%d",bellek+i);
        toplam += *(bellek+i);
    }
    ortalama = toplam/N;
    printf("Ortalama: %f\n",ortalama);
    printf("Toplam: %.0f\n",toplam);
    return 0;
}