#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    int gecici;
    int ilk,son,orta,aranan;
    printf("Lutfen Kac adet sayi girilecegini yaziniz\n");
    scanf("%d",&N);

    int dizi[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("Dizi elemanlarim:\n");
    
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=0;i<(N-1);i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    printf("\nSiralanmis Hali\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }

    printf("\nAranan Degeri Giriniz:\n");
    scanf("%d",&aranan);

    ilk=0;
    son=N-1;
    orta=(ilk+son)/2;

    while(ilk<=son)
    {
        if(dizi[orta]<aranan)
        {
            ilk=orta+1;
        }
        else if(dizi[orta]==aranan)
        {
            printf("%d sayisi %d. sirada bulundu.\n",aranan,orta+1);
        }
        else
        {
            son=orta-1;
        }
        orta=(ilk+son)/2;
    }
    if(ilk>son)
    {
        printf("%d bulunamadi",aranan);
    }

    return 0;
}