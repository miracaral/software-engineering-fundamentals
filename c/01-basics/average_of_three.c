#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,ortalama;

    printf("3 sayi giriniz.\n");
    scanf("%f%f%f", &x,&y,&z);
    ortalama = (x+y+z)/3;
    printf("Ortalama : %.2f", ortalama);

    return 0;
}