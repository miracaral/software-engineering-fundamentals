#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *giris,*cikis;
    char kaynak[50],hedef[50],karakter;

    printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz\n");  
    gets(kaynak);
    giris=fopen(kaynak,"r");
    if(giris==NULL)
    {
        printf("Yedeklenecek dosya bulunamadi\n");
        exit(1);
    }
    printf("Lutfen yedeklenecek dosyanin yerini,dosya adini,uzantisini giriniz\n");
    gets(hedef);

    cikis=fopen(hedef,"w");
    if(cikis==NULL)
    {
        printf("Dosya olusturulamadi\n");
        exit(1);
    }
    for(karakter=getc(giris);karakter!=EOF;karakter=getc(giris))
    {
        putc(karakter,cikis);
    }
    fclose(giris);
    fclose(cikis);

    printf("Yedekleme islemi tamamlandi! Tebrikler.");

    return 0;
}