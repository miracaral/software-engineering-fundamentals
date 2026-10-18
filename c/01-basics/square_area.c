#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar,alan;

    printf("Lutfen kenar uzunlugunu giriniz\n");
    scanf("%d", &kenar);

    alan = kenar * kenar;

    printf("Karenin alani: %d'dir\n", alan);

    return 0;
}