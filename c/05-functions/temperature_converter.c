#include <stdio.h>
#include <stdlib.h>

float FdenCye(float f)
{
    return (0.5555)*(f-32);
}
float CdenFye(float c)
{
    return (1.8*c)+32;
}



int main()
{
    //f=(1.8*c)+32   c=(5/9)*(F-32)
    float f,c,secim;
    printf("1: Fahrenheit => Celcius\n");
    printf("2: Celcius => Fahrenheit\n");
    scanf("%f",&secim);
    if(secim == 1)
    {
        printf("Lutfen Fahrenheit degerinizi giriniz\n");
        scanf("%f",&f);
        printf("%f F = %f C'dur\n",f,FdenCye(f));
    }
    else if(secim == 2)
    {
        printf("Lutfen Celcius degerinizi giriniz\n");
        scanf("%f",&c);
        printf("%f C = %f F'dir\n",c,CdenFye(c));
    }
    else
    {
        printf("Yanlis secim yaptiniz!!!\n");
    }
    return 0;
}