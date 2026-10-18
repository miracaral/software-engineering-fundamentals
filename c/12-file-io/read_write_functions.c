#include <stdio.h>
#include <stdlib.h>


int main()
{
    // fgetc(); //Dosyadan tek bir karakter okur!
    // fscanf(); //Dosyadan bicimlendirilmis karakter dizisi okur

    /*FILE *dosya;
    char karakter;
    dosya=fopen("deneme.txt","r");
    if(dosya!=NULL)
    {
        karakter=fgetc(dosya);
        printf("%c",karakter);
    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya); */

    // FILE *dosya;
    // char k1[10],k2[10];
    // int sayi;
    // if((dosya=fopen("canan2.txt","r"))!=NULL)
    // {
    //     fscanf(dosya,"%s",k1);
    //     fscanf(dosya,"%s",k2);
    //     fscanf(dosya,"%d",&sayi);
    //     printf("%s %s %d\n",k1,k2,sayi);
    // }
    // else
    // {
    //     printf("Dosya bulunamadi");
    // }
    // fclose(dosya);

    /* FILE *dosya;
    char kelime[50][20];
    int i=0;
    if((dosya=fopen("kdizim.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",kelime[i]);
            printf("%s ",kelime[i]);
            i++;
        }
        printf("\n");
    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya); */

    /*FILE *dosya;
    char numaralar[10][10],isimler[10][20];
    int notlar[10];
    int i=0;
    if((dosya=fopen("ogrenci2.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s %s %d",numaralar[i],isimler[i],&notlar[i]);
            printf("%s %s %d\n",numaralar[i],isimler[i],notlar[i]);
            i++;
        }   
    }   
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya); */

    FILE *dosya;
    char karakter;
    if((dosya=fopen("lorem.txt","r"))!=NULL)
    {
        karakter = fgetc(dosya);
        while(karakter!=EOF)
        {
            printf("%c",karakter);
            karakter=fgetc(dosya);
        }
    }
    else
    {
        printf("Dosya bulunamadi");
    }

    return 0;
}