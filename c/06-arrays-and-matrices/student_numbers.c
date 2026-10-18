#include <stdio.h>
#include <string.h>


int main()
{
    int ogrno[5],i,o_sayi;
    for(i=0;i<o_sayi;i++)
    {
        printf("Ogrenci numarasini[%d] giriniz: ",i);
        scanf("%d",&ogrno[i]);
    
    }
    printf("\nGirilen Ogrenci Numaralari:\n");
    for(i=0;i<o_sayi;i++)
    {
        printf("Ogrenci numarasi[%d]: %d\n",i+1,ogrno[i]);
    }
}