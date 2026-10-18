#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[5] = {19,10,8,17,9};
    int i;

    can[2] = 18;
    can[3] = 1;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", can[i]);
    }

    return 0;
}
