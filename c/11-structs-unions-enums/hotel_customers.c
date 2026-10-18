#include <stdio.h>
#include <stdlib.h>

struct musteri
{
    char soyisim[20]; //siralari onemli dikkat!!!
    char isim[20];
    int kahvalti; //0=hayir 1=evet
    int aksamyemegi;
    int hotel; //1=yok 2=2 yildizli 3=3 yildizli otel
    int arkadas; //0=arkadasi yok 1=arkadasi var
    
};

void ikiyildizli(struct musteri tab[4])
{
    int i;
    printf("Iki yildizli hotelde konaklayan musteriler\n");
    for(i=0;i<4;i++)
    {
        if(tab[i].hotel==2)
        {
            printf("Soyad: %s, Ad: %s \n",tab[i].soyisim,tab[i].isim);
        }
    }
}

void kahvalti(struct musteri tab[],int *nb)
{
    int i;
    *nb=0;
    for(i=0;i<4;i++)
    {
        if(tab[i].kahvalti==1)
        {
            *nb= *nb + 1;
            if(tab[i].arkadas==0)
            {
                *nb = *nb + 1;
            }
        }
    }
}

void fatura(struct musteri p,int *total)
{
    *total=0;
    if(p.kahvalti==1)
    {
        *total += 15;
    }
    if(p.aksamyemegi==1)
    {
        *total += 35;
    }
    if(p.arkadas==0)
    {
        *total *= 2;
    }
    if(p.hotel==2)
    {
        *total += 75;
    }
    if(p.hotel==3)
    {
        *total += 100;
    }
}

int main()
{
    int n,m;
    struct musteri Tablo[4]={{"aro","miro",0,1,2,1},{"osman","haci",0,0,1,0},{"boze","jean",1,0,2,1},{"giy","jean",0,1,1,0}}; //siraya dikkat!!!
    ikiyildizli(Tablo);
    kahvalti(Tablo,&n);
    fatura(Tablo[2],&m);
    printf("Kahvalti yapan katilimcilar: %d \n",n);
    printf("%s soyisimli katilimci tarafindan odenen fatura: %d ",Tablo[2].soyisim,m);
    
    return 0;
}