#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    printf("Lutfen sayi giriniz\n");
    scanf("%f", &x);

    printf("f(%.0f) = %.0f",x, x*x*x + 13*x*x + 47*x + 5);

    return 0;
}