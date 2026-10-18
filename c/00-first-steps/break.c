#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    for (x = 0; x < 10; x++)
    {

        printf("%d\n", x);

        if(x == 4)
        {
            break;
        }

    }

        return 0;
}
