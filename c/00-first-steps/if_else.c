#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    int y;

    printf("X sayisini giriniz\n");
    scanf("%d", &x);

    printf("Y sayisini giriniz\n");
    scanf("%d", &y);

    if(x > y)
    {
        printf("x y den buyuktur");
    }
    else if(x == y)
    {
        printf("x y ye esittir");
    }
    else
    {
        printf("x y den kucuktur");
    }


    return 0;
}
