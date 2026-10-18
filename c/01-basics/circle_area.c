#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float r,alan,cevre;

    printf("Lutfen yaricap degeri giriniz.\n");
    scanf("%f", &r);

    alan = PI*r*r;

    cevre = 2*PI*r;

    printf("Dairenin alani: %f\n", alan);
    printf("Dairenin cevresi %f\n", cevre);

    return 0;
}