#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,birler_bas,onlar_bas,yuzler_bas;

    printf("Bir sayi giriniz.\n");
    scanf("%d", &sayi);

    birler_bas = sayi % 10;

    onlar_bas = sayi % 100 / 10;

    yuzler_bas = sayi % 1000 / 100;

    printf("Sayimizin birler bas: %d\n", birler_bas);
    printf("Sayimizin onlar bas: %d\n", onlar_bas);
    printf("Sayimizin yuzler bas: %d\n", yuzler_bas);
return 0;

}