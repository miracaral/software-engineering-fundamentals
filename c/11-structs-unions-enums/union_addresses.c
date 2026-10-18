#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol
{
    int x;
    int y;

}kontrol;

int main()
{
    int *X,*Y;
    kontrol.x=100;

    X=&kontrol.x;
    printf("Tamsayi(x)=%d\nBellek adresi:%X\n",kontrol.x,X);

    kontrol.y=200;
    Y=&kontrol.y;
    printf("Tamsayi(y)=%d\nBellek adresi:%X\n",kontrol.y,Y);

    return 0;
}