#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kisakenar,uzunkenar,alan,cevre;

    printf("Lutfen kisakenar uzunlugu giriniz\n");
    scanf("%d", &kisakenar);

    printf("Lutfen uzunkenar uzunlugu giriniz\n");
    scanf("%d", &uzunkenar);

    alan = uzunkenar*kisakenar;
    cevre = 2*(uzunkenar+kisakenar);

    printf("Dikdortgenimizin alani: %d\n", alan);
    printf("Dikdortgenimizin cevresi: %d", cevre);
    return 0;
}