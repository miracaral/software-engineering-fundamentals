#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,sonuc;

    printf("Lutfen degiskenleri (a,b,c,x) sirasiyla giriniz\n");
    scanf("%d%d%d%d", &a,&b,&c,&x);

    sonuc = a*x*x+b*x+c;
    printf("ax^2+b^x+c degerim: %d",sonuc);

    return 0;
}