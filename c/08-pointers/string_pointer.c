#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[100]= "canan";
    char *p1;

    p1 = can;

    printf("4.karakterim %c dir\n",*(p1+3));


    return 0;
}