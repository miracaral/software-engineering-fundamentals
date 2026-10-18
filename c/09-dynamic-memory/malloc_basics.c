#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(10 * sizeof(int));
    //p = (int *)malloc(50); iki malloc veya calloc kullanimi da DOGRUDUR!!!
    printf("%d\n",p[0]);

    p[0]=12;
    printf("%d\n",p[0]);
    free(p);

    return 0;
}