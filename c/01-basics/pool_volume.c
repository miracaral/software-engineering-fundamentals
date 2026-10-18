#include <stdio.h>
#include <stdlib.h>

int main()
{
    float en,boy,h,hacim;

    printf("Havuzun enini boyunu ve yuksekligini giriniz.\n");
    scanf("%f%f%f", &en,&boy,&h);

    hacim = en*boy*h;
    printf("Tamamen doldurmak icin bu kadar metrekup su gerekmektedir: %.0f metrekup\n", hacim);

    return 0;

}