#include <stdio.h>
#include <stdlib.h>
#define YOL 450

int main()
{
    float saat, ort_hiz;

    printf("Ankara - Istanbul arasini kac saatte gittiniz?\n");
    scanf("%f", &saat);

    ort_hiz = YOL/saat;
    printf("Arabanin ortalama hizi: %.0f\n", ort_hiz);

    return 0;
}