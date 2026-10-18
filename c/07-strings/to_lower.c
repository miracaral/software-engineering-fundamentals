#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char karakter;

    printf("Lutfen bir buyuk harf giriniz.\n");
    scanf("%c", &karakter);
    
    if((karakter >= 'A') && (karakter <= 'Z'))
    {
        printf("Kucuk harfiniz: %c\n", tolower(karakter));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz.\n");
    }
    
    return 0;
}