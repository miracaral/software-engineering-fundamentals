#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[100];
    char *pointer;

    printf("Lutfen bir karakter dizisi giriniz\n");
    fgets(can,100,stdin);

    for(pointer=can;*pointer;pointer++)
    {
        printf("Dizimiz %s %ld kadar karakterden olusmaktadir.\n",can,pointer-can);

    }
}