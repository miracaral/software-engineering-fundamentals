#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban,us,sonuc = 1,usdegerim;
    printf("Taban ve us degerlerini giriniz.\n");
    scanf("%d%d", &taban,&us);

    usdegerim = us;
    while(us != 0)
    {
        sonuc = sonuc * taban;
        us--;
    }

    printf("%d^%d = %d\n",taban,usdegerim,sonuc);
    return 0;
}