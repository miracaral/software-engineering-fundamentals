#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    int sonuc;
    char can[15] ="abcdef";
    char canan[15] ="ABCDEF";

    sonuc = strcmp(can, canan);

    

    if(sonuc < 0)
    {
        printf("Can Canan dan daha kucuktur");
    }
    else if(sonuc > 0)
    {
        printf("Can Canan dan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }
    
    return 0; 
}