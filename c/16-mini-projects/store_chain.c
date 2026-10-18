#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1
#define M 2

struct urun
{
    char referance_code[20];
    float fiyat;
}; //structimizi ve bilesenlerini tanimladik artik olusturacak fonksiyonu yazmaliyiz!!!

struct isci
{
    char isim[20];
    char soyisim[20];
    int yas;
}; //structimizi ve bilesenlerini tanimladik artik olusturacak fonksiyonu yazmaliyiz!!!

struct magaza
{
    char isim[20];
    char sokak_ismi[20];
    char mahalle[20];
    char telefon[20];
    float satis;
    struct isci e1;
    struct isci e2;
    struct isci e3;
    struct urun p[M];
}; //structimizi ve bilesenlerini tanimladik artik olusturacak fonksiyonu yazmaliyiz!!!

void urunu_olustur(struct urun *ur)
{
    printf("Referans kodu giriniz\n");
    scanf("%s",ur->referance_code);

    printf("Lutfen fiyati giriniz\n");
    scanf("%f",&ur->fiyat);
}

void isciyi_olustur(struct isci *em)
{
    printf("Iscinin adini giriniz: \n");
    scanf("%s",em->isim);

    printf("Iscinin soyadini giriniz: \n");
    scanf("%s",em->soyisim);

    printf("Iscinin yasini giriniz: \n");
    scanf("%d",&em->yas); //int tipinde oldugu icin & isaretini yaziyoruz!
}

void magazayi_olustur(struct magaza *m)
{
    int i;
    printf("Lutfen magazanin ismini girin\n");
    scanf("%s",m->isim);

    printf("Lutfen magazanin bulundugu sokagin ismini giriniz\n");
    scanf("%s",m->sokak_ismi);

    printf("Lutfen magazanin bulundugu mahallenin ismini giriniz\n");
    scanf("%s",m->mahalle);

    printf("Lutfen magazanin telefonu olup olmadigini giriniz\n");
    scanf("%s",m->telefon);

    printf("Lutfen satis rakamini giriniz\n");
    scanf("%f",&m->satis);

    printf("Isci 1:\n");
    isciyi_olustur(&m->e1);

    printf("Isci 2:\n");
    isciyi_olustur(&m->e2);

    printf("Isci 3:\n");
    isciyi_olustur(&m->e3);
    for(i=0;i<M;i++)
    {
        printf("Urunlerinizi giriniz %d : \n",i);
        urunu_olustur(&m->p[i]);
    }
    
}

void isciyi_bas(struct isci ib)
{
    printf("\tIsim: %s\n",ib.isim);
    printf("\tSoyisim: %s\n",ib.soyisim);
    printf("\tYas: %d\n",ib.yas);
}

void urunu_bas(struct urun ub)
{
    printf("\tReferans kodu: %s\n",ub.referance_code);
    printf("\tFiyat: %f\n",ub.fiyat);
}

void magazayi_bas(struct magaza m)
{
    int i;
    printf("Magazanin ismi: %s\n",m.isim);
    printf("Magazanin bulundugu sokak: %s\n",m.sokak_ismi);
    printf("Magazanin bulundugu mahalle: %s\n",m.mahalle);
    printf("Magazanin telefon numarasi var mi? %s\n",m.telefon);
    printf("Satis rakami: %f\n",m.satis);
    printf("Isci 1: \n");
    isciyi_bas(m.e1);
    printf("Isci 2: \n");
    isciyi_bas(m.e2);
    printf("Isci 3: \n");
    isciyi_bas(m.e3);
    for(i=0;i<M;i++)
    {
        printf("Urun: %d\n",i);
        urunu_bas(m.p[i]);
    }
}

void en_yasli(struct magaza m)
{
    struct isci yasli;
    if(m.e1.yas>yasli.yas)
        yasli=m.e1;
    if(m.e2.yas>yasli.yas)
        yasli=m.e2;
    if(m.e3.yas>yasli.yas)
        yasli=m.e3;
    
    printf("En yasli isci: \n");
    isciyi_bas(yasli);
}

void ortalama_fiyat(struct magaza m[N])
{
    int i,j;
    float s=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            s = s + m[i].p[j].fiyat;
        }
        printf("%s magazasinda yer alan urunlerin ortalama fiyati: %f\n",m[i].isim,(float)s/M);
    }
}

void bulundugu_mahalle(struct magaza m[N],char q[12])
{
    int i;
    for(i=0;i<N;i++)
    {
        if(strcasecmp(m[i].mahalle,q)==0)
        {
            printf("%s mahallesinde %s magazasi bulunur \n",m[i].mahalle,m[i].isim);
        }
    }
}

int main()
{
    int i;
    struct magaza m[N];
    for(i=0;i<N;i++)
    {
        printf("Magaza %d:\n",i);
        magazayi_olustur(&m[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("Magaza %d:\n",i);
        magazayi_bas(m[i]);
    }
        en_yasli(m[0]);
        ortalama_fiyat(m);
        bulundugu_mahalle(m,"sisli");

    
    return 0;
}