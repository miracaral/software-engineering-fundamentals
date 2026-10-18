#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil;

    printf("Lutfen bir yil giriniz.\n");
    scanf("%d", &yil);

    if(yil % 400 == 0)
    {
        printf("%d artik yildir.", yil);

    }
    else if(yil % 100 == 0)
    {
        printf("%d artik yil degildir.", yil);
    }
    else if(yil % 4 == 0)
    {
        printf("%d artik yil.", yil);
    }
    else
    {
        printf("%d artik yil degildir.", yil);
    }
    
    return 0;
}