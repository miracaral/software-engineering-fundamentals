#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya1,*dosya2;
    int karakter;
    dosya1=fopen("bilgiler.txt","r");
    dosya2=fopen("buyuk.txt","w");

    if(dosya1 == NULL || dosya2 == NULL)
    {
        printf("Dosya okuma veyahut yazma hatasi\n");
    }
    else
    {
        do
        {
            karakter=getc(dosya1);
            if(karakter != EOF)
            {
                if(karakter >= 'a' && karakter <= 'z')
                {
                    fprintf(dosya2,"%c",karakter-32);
                }
                else
                {
                    fprintf(dosya2,"%c",karakter);
                }
            }
            
        } while(karakter != EOF);
        printf("Islem basarili oldu!");
        fclose(dosya1);
        fclose(dosya2);
    }

    return 0;
}