#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define VARMI
int main()
{
    int sayi;
    #ifdef VARMI

    sayi = 2;

    #else

    printf("Lutfen bir deger giriniz\n");
    scanf("%d", &sayi);
    
    #endif
    printf("Sayi degerim %d", sayi);



    /*

    #ifdef PII
    printf("C harika gidiyor");
    #else
    printf("C muhtesem gidiyor");
    #endif

    */


    return 0;
}