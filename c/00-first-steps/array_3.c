#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilarim[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &sayilarim[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", sayilarim[i]);
    }


    return 0;
}
