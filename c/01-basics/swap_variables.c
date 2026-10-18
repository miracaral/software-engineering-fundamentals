#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,gecici;

    printf("a sayisini giriniz.\n");
    scanf("%d", &a);

    printf("b sayisini giriniz.\n");
    scanf("%d", &b);

    printf("Yer degistirmeden once\n");

    printf("a sayisi: %d\n", a);

    printf("b sayisi: %d\n", b);
    
    gecici = a;
    a = b;
    b = gecici;

    printf("Yer degistirmeden sonra\n");

    printf("a sayisi: %d\n", a);

    printf("b sayisi: %d\n", b);

    return 0;
}