#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char satir[100],dosyaismi[45];
    char *karakter;
    printf("Lutfen dosya yolunu ve ismini giriniz\n");
    gets(dosyaismi);
    dosya=fopen(dosyaismi,"r");
    if(dosya==NULL)
    {
        printf("Dosya Bulunamadi!\n");
    }
    else
    {
        do{
            karakter=fgets(satir,100,dosya);
            if(karakter != NULL)
            {
                printf("%s",satir);
            }
        }while(karakter != NULL);

        fclose(dosya);
    }

    return 0;
}