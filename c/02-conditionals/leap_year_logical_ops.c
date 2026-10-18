#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil;

    printf("Lutfen bir yil giriniz.\n");
    scanf("%d", &yil);


    if((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0))
    {
        printf("%d artik yildir", yil);
    }
    
    else
    {
        printf("%d artik yil degildir.", yil);
    }
    
    return 0;
}