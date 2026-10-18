#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char adsoyad[50];
    char ders[30];
    int vize1,vize2,final;
};

int main()
{
    FILE *dosya;
    int N,i;
    float ort;

    printf("Lutfen ogrenci sayisini giriniz\n");
    scanf("%d",&N);
    struct ogrenci ogr[N];

    dosya=fopen("dersler.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya Olusturulamadi\n");
    }
    else
    {
        for(i=0;i<N;i++) //Vizeler %20 Final %60
        {
            fflush(stdin); //Bellegi rahatlatip tampon gorevi gorup degerleri daha az hatayla almayi saglar!!!
            printf("Adi Soyadi:");
            fgets(ogr[i].adsoyad,50,stdin);
            printf("Ders Adi:");
            fgets(ogr[i].ders,30,stdin);
            printf("Vize 1 Notu:");
            scanf("%d",&ogr[i].vize1);
            printf("Vize 2 Notu:");
            scanf("%d",&ogr[i].vize2);
            printf("Final notu:");
            scanf("%d",&ogr[i].final);
            ort= (float)ogr[i].vize1 * 0.2 + (float)ogr[i].vize2 * 0.2 + (float)ogr[i].final * 0.6;
            fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].final,ort);

        }
        fclose(dosya);
    }
    
    return 0;
}