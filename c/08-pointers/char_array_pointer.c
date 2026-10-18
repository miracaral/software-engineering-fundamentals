#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[20]={'b','o','n','j','o','u','r','\0'};
    char *mirac;

    mirac = isim;

    printf("%c",*(mirac+1));


    return 0;
}