#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;
    char satir[100],*karakter;
    dosya=fopen("bilgi3.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi!");
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
        printf("\nOkuma islemi tamamlandi!");
    }


    return 0;
}