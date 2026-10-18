#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void yerdegistir(int x,int y)
{
    int gecici;
    gecici=x;
    x=y;
    y=gecici;
    printf("x:%d\ny:%d\n",x,y);
}

int main()
{
    int x,y;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d%d", &x,&y);
    printf("x:%d\ny:%d\n\n",x,y);
    yerdegistir(x,y);

    return 0;
}