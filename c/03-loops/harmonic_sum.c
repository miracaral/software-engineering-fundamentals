#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sonuc;

    do
    {
        printf("Lutfen bir n degeri giriniz.\n");
        scanf("%d", &n);

    }   while(n < 1);
    

    for(i = 1; i <= n; i++)
    {
        sonuc += (float) 1/i; 
    }
    printf("Sonucumuz: %f\n", sonuc);

    return 0;
}