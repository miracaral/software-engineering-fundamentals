#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;


    printf("Lutfen 3 sayi giriniz\n");
    scanf("%d%d%d", &a,&b,&c);

    /* if(a > b && a > c)
    {
        printf("%d sayisi en buyuktur", a);
    }
    if(b > a && b > c)
    {
        printf("%d sayisi en buyuktur", b);
    }
    if(c > a && c > b)
    {
        printf("%d sayisi en buyuktur", c);
    }
    if(a == c && b == c)
    {
       printf("Hepsi esittir");
    } */

    if(a > b && a > c)
    {
        printf("%d sayisi en buyuktur", a);
    }
    else if(b > a && b > c)
    {
        printf("%d sayisi en buyuktur", b);
    }
    else if(c > a && c > b)
    {
        printf("%d sayisi en buyuktur", c);
    }
    else
    {
       printf("Hepsi esittir");
    }





    return 0;
}
