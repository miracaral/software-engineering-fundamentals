#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int taban,us,sonuc;
    printf("Taban ve us degerlerini giriniz.\n");
    scanf("%d%d", &taban,&us);

    sonuc = pow(taban,us);

    printf("%d^%d = %d\n",taban,us,sonuc);

    return 0;
}