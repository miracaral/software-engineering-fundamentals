#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define SAYI 5

int main()
{
    #if (SAYI == 6)

    printf("Sayimiz: %d",SAYI);

    #else

    printf("Sayimiz 5 den farklidir");

    #endif

    return 0;
}
