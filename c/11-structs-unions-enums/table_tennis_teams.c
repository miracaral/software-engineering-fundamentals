#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu
{
    char soyisim[20];
    char isim[20];
    int yas;
    int seviye;

};

struct equipe
{
    char isim[20];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};
void oyuncuyu_olustur(struct oyuncu *j)
{
    printf("Ismi giriniz: ");
    scanf("%s",j->isim);
    printf("Soyismi giriniz: ");
    scanf("%s",j->soyisim);
    printf("Yasi giriniz : ");
    scanf("%d",&j->yas);
    printf("Seviyeyi giriniz: ");
    scanf("%d",&j->seviye);
}

void ekibi_olustur(struct equipe *e)
{
    printf("Ekibin adini giriniz: \n");
    scanf("%s",e->isim);
    printf("Oyuncu 1: \n");
    oyuncuyu_olustur(&e->oyuncu1);
    printf("Oyuncu 2: \n");
    oyuncuyu_olustur(&e->oyuncu2);
}

void oyuncuyu_bas(struct oyuncu j)
{
    printf("Isim: %s\n",j.isim);
    printf("Soyisim: %s\n",j.soyisim);
    printf("Yas: %d\n",j.yas);
    printf("Seviye: %d\n",j.seviye);
}

void ekibi_bas(struct equipe e)
{
    printf("Isim: %s\n",e.isim);
    printf("Oyuncu 1: \n");
    oyuncuyu_bas(e.oyuncu1);
    printf("Oyuncu 2: \n");
    oyuncuyu_bas(e.oyuncu2);
}



int main()
{
    int i;
    struct equipe tab[N];
    for(i=0;i<N;i++)
    {
        printf("Ekip %d : \n",i);
        ekibi_olustur(&tab[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("Ekip %d: \n",i);
        ekibi_bas(tab[i]);
    }
    return 0;
}