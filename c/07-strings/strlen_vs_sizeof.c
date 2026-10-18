#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char can[] = "Aralik";

    printf("Karakter dizimizin boyu %d\n", strlen(can));
    printf("Karakter dizimizin boyu %d", sizeof(can));
}