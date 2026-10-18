#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char ad[100],soyad[100];
    printf("Adinizi giriniz\n");
    scanf("%s",&ad);

    printf("Soyadinizi giriniz\n");
    scanf("%s", &soyad);

    strcat(ad," ");
    strcat(ad,soyad);

    printf("Ad soyad: %s\n",ad);
    return 0;
}