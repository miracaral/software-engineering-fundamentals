#include <stdio.h>
#include <stdlib.h>

int ussunu_al(int a, int b)
{
    int i,sonucum = 1;
    for(i = 0;i < b; i++)
    {
        sonucum = sonucum*a;
    }
    return sonucum;
}

int main()
{
    int x=4, y=5, sonuc;
    sonuc = ussunu_al(x,y);
    printf("%d", sonuc);
    return 0;
}