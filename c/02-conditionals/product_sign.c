#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d%d",&a,&b); 

    if((a > 0 && b > 0) || (a < 0 && b < 0))
    {
        printf("Carpim pozitiftir.\n");
    }
    else if ((a > 0 && b < 0) || (a < 0 && b > 0))
    {
        printf("Carpim negatiftir.\n"); 
    }
    else
    {
        printf("Carpim 0'a esittir\n");
    }

    return 0;
}