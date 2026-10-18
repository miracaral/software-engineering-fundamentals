#include <stdio.h>
#include <stdlib.h>

typedef struct AdresDefteri
{
    char Ad[100];
    char Soyad[100];
    char TelNo[10];
    char Adres[200];
    char PostaKodu[6];
}defter;

int main()
{
    int N;
    int i;
    char satir;
    printf("Kac adet kayit tutulacak\n");
    scanf("%d",&N);
    scanf("%c",&satir);

    defter iletisim[N];

    for(i=0;i<N;i++)
    {
        printf("Adi giriniz\n");
        gets(iletisim[i].Ad);

        printf("Soyadi giriniz\n");
        gets(iletisim[i].Soyad);

        printf("Telefon numarasi giriniz\n");
        gets(iletisim[i].TelNo);

        printf("Adres giriniz\n");
        gets(iletisim[i].Adres);

        printf("Posta kodu giriniz\n");
        gets(iletisim[i].PostaKodu);
    }

    printf("ADI\tSOYADI\tTELEFON\tADRES\tPOSTAKODU\n");
    printf("==========================================\n");

    for(i=0;i<N;i++)
    {
        printf("%s \t %s \t %s \t %s \t %s\n",iletisim[i].Ad,iletisim[i].Soyad,iletisim[i].TelNo,iletisim[i].Adres,iletisim[i].PostaKodu);
    }

    return 0;
}