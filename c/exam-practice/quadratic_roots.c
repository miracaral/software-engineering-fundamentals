#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float kok1, kok2;
    printf("Uc sayi giriniz: ");
    scanf("%f %f %f", &a, &b, &c); //axˆ2+bx+c=0 kok
    float delta = b*b - 4*a*c;
    
    if(delta > 0)
    {
        kok1 = (-b + (sqrt(delta))) / (2*a);
        kok2 = (-b - (sqrt(delta))) / (2*a);
        printf("Iki farkli kok vardir: %.2f ve %.2f\n",kok1,kok2);
        
    }
    if(delta == 0)
    {
        kok1 = kok2 = -b / (2*a);
        printf("Cift katli bir kok vardir: %.2f\n",kok1);
    }
    if(delta < 0)
    {
        printf("Gercek kok yoktur.\n");
    }

}