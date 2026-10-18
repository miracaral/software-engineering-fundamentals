#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    float x,seri;
    char devam;

    do
    {
    printf("Pozitif sayi giriniz\n");
    scanf("%d", &n);

    printf("Reel sayi : \n");
    scanf("%f", &x);

    
    seri = 0;

    for(i = 1; i <= 2*n-1; i += 2)
    {
        seri += i / pow(x,i+1);
    }

    printf("Seri = %.2f\n", seri);
    printf("Devam etmek istiyor musunuz:\n");
    scanf(" %c", &devam);

    } while ((devam == 'E') || (devam == 'e'));
    
    
    return 0;
}