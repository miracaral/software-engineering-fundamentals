#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%d%d",&x,&y);

    if(x >= y)
    {
        if(x == y)
        {
            printf("Sonuc: %d = %d", x,y);
        }
        else
        {
            printf("Sonuc: %d > %d", x,y);
        }
    }
    else
    {
        printf("Sonuc: %d < %d", x,y);
    }

    return 0;
}

