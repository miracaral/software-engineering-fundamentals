#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char yazi[200];
    int i,harfsayisi=0,bosluksayisi=0,sayisayim=0;

    //printf("%d",'a'); örnek icin

    printf("Lutfen bir yazi giriniz.\n");
    fgets(yazi,200,stdin);

    for(i=0;yazi[i] != '\0';i++)
    {
        if((yazi[i] >= 'a' && yazi[i] <= 'z') || (yazi[i] >= 'A' && yazi[i] <= 'Z'))
        {
            harfsayisi++;
        }
        else if(yazi[i] >= '0' && yazi[i] <= '9')
        {
            sayisayim++;
        }
        else if(yazi[i] == ' ')
        {
            bosluksayisi++;
        }
    }

    printf("Harf sayisi: %d\n",harfsayisi);
    printf("Sayi sayisi: %d\n",sayisayim);
    printf("Bosluk sayim: %d\n",bosluksayisi);

    return 0;
}