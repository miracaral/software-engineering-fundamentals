#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    float x,seri;
    printf("Pozitif sayi giriniz.\n");
    scanf("%d", &n);
    printf("Reel sayi: \n");
    scanf("%f", &x);

for(i = 1; i <= 2*n -1; i += 2)
{
    seri += i/ pow(x,i+1);
}
printf("Seri = %f\n",seri);

return 0;
}