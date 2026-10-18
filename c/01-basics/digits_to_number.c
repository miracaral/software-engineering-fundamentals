#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,toplam;

    printf("Yuzler basamagi giriniz.\n");
    scanf("%d", &x);

    printf("Onlar basamagi giriniz.\n");
    scanf("%d", &y);

    printf("Birler basamagi giriniz.\n");
    scanf("%d", &z);

    toplam = 100*x+ 10*y + z;

    printf("Sayimiz: %d\n", toplam);

    return 0;
}