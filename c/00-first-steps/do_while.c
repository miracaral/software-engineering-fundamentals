#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilarim[3];
    int i = 0;

    do
    {
        scanf("%d", &sayilarim[i]);
        i++;
    }

    while(i < 3);

    i = 0;

    do
    {
        printf("%d\n", sayilarim[i]);
        i++;
    }
    while(i < 3);


    return 0;
}
