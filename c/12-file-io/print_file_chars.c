#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter;

    dosya=fopen("bilgi2.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi");
    }
    else
    {
        do
        {
            karakter=getc(dosya);
            if(karakter != EOF)
            {
                putchar(karakter);
            }
            

        }while(karakter != EOF); //END OF FILE = EOF !!!!!!!!
        
    }

    fclose(dosya);
    printf("\nOkuma Islemi Tamamlandi!");

    return 0;
}