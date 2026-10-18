#include <stdio.h>
#include <stdlib.h>

struct yarismaciTip
{
    char isim[10],soyad[10];
    float puan[10],performans;
};

float puanHesap(struct yarismaciTip pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }
        sonuc += pat.puan[i];
    }
    sonuc=(sonuc-max-min)/8;
    return(sonuc);
}

int main()
{
    int i;
    struct yarismaciTip patenci;

    printf("Yarismacinin adi:\n");
    scanf("%s", &patenci.isim);

    printf("Yarismacinin soyadi:\n");
    scanf("%s", &patenci.soyad);

    printf("Hakem puani:\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%f",&patenci.puan[i]);
    }
    patenci.performans = puanHesap(patenci);

    printf("Performans puani= %f\n",patenci.performans);


    return 0;
}