#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;

    printf("Lutfen 3 adet sayi giriniz.\n");
    scanf("%d%d%d", &a,&b,&c);
    max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    printf("Maximum degerim: %d\n", max);

    min = a;

    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }
    printf("Minimum degerim: %d\n", min);
    return 0; 
}