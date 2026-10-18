#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main()
{
    char dizi[MAX]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
    char *sayi1;
    char *sayi2;
    char dizi_kopya[MAX];
    int i;

    sayi2=dizi_kopya;

    for(sayi1=dizi;sayi1<dizi+MAX;sayi1++)
    {
        *sayi2=*sayi1; //sagdakini sola esitle!
        sayi2++;
    }
    printf("Orijinal tablo: ");

    for(i=0;i<MAX;i++)
    {
        printf("%c",*(dizi+i));
    }
    printf("\nKopya Tablo: ");
    for(i=0;i<MAX;i++)
    {
        printf("%c",*(dizi_kopya+i));
    }

    return 0;
}