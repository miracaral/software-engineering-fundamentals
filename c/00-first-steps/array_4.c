#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilarim[3];
    int i = 0;

    while(i < 3)
    {
        scanf("%d", &sayilarim[i]);
        i++;
    }

    i = 0;

    while(i < 3)
    {
        printf("%d\n", sayilarim[i]);
        i++;
    }

    return 0;
}
