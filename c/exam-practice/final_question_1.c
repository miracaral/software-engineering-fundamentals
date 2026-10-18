#include <stdio.h>

int main() {
    int x, y, z, *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    for(x = 0; x < 2; x++)
        for(y = 0; y < 2; y++)
            for(z = 0; z < 1; z++)
            {

                *ptr2 = *ptr1 + *ptr2;
                printf("%d %d %d\n", x, y, z);
            }

    ptr1++;

    return 0;
}