#include <stdio.h>
#include <stdlib.h>
#define N 3


typedef struct
{
    char ilac_adi[20];
    int adet;
    int fiyat;
}data;

int main()
{
    data veriler[N];
    int i;
    char satir;

    for(i=0;i<N;i++)
    {
        fflush(stdin);
        printf("Lutfen ilac adini giriniz\n");
        fgets(veriler[i].ilac_adi,30,stdin);

        printf("Lutfen ilac adedini giriniz\n");
        scanf("%d",&veriler[i].adet);

        printf("Lutfen ilac fiyatini giriniz\n");
        scanf("%d",&veriler[i].fiyat);
    }
    printf("Ilac ADI\n");
    printf("=============\n");

    for(i=0;i<N;i++)
    {
        if(veriler[i].adet<=20 && (veriler[i].fiyat<=30))
        {
            printf("%s\n",veriler[i].ilac_adi);
        }
        
    }

    return 0;
}