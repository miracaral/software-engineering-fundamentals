#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float dortislem(float x,float y,char islem)
{
    if(islem == '+')
    {
        return x+y;
    }
    else if(islem == '-')
    {
        return x-y;
    }
    else if(islem == '*')
    {
        return x*y;
    }
    else if(islem == '/')
    {
        return x/y;
    }
    else
    {
        printf("YANLIS OPERATOR GIRILDI!!!!");
    }
}


int main()
{
    float x,y ;
    char islem;
    
    printf("Hangi islemi yaptirmak istiyorsunuz? (+ - * /) \n");
    scanf("%c", &islem);

    printf("Lutfen ilk sayiyi giriniz\n");
    scanf("%f", &x);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f", &y);

    printf("Islemin sonucu: %.2f", dortislem(x,y,islem));


    return 0;
}