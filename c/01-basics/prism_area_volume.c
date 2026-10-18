#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,h,taban_alan,yanal_alan,toplam_alan,hacim;

    printf("Lutfen x,y,h değerlerini giriniz\n");
    scanf("%d%d%d", &x,&y,&h);

    taban_alan = x * y;
    printf("Prizmanin taban alani: %d'dir\n", taban_alan);
    yanal_alan = 2*h*(x+y);
    printf("Prizmanin yanal alani: %d'dir\n", yanal_alan);
    toplam_alan = taban_alan + yanal_alan;
    printf("Prizmanin toplam alani: %d'dir\n", toplam_alan);
    hacim = x*y*h;
    printf("Prizmanin hacmi: %d'dir\n", hacim);

    return 0;
}