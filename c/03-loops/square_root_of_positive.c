#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;


    do
    {
        printf("Lutfen bir sayi giriniz.\n");
        scanf("%f", &x);
        if(x < 0)
        {
            printf("Lutfen bir pozitif sayi giriniz.\n");
            continue;
        }
        
        printf("Sayimizin karekoku: %.2f\n", sqrt(x));

    } while (x);

    // true = 0 false = 1
    
    return 0;
}