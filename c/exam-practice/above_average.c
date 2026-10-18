#include <stdio.h>

int main()
{
    float dizi[10];
    float top=0;
    float ort;
    
    for(int i=0; i<10; i++) 
    {
        printf("%d. sayiyi giriniz: ", i+1);
        scanf("%f",&dizi[i]);
        top += dizi[i];
    }
    ort = top / 10;
    printf("Ortalama: %f\n\n", ort);
    printf("Ortalama ustundeki veya altindaki sayilar:\n");

    for(int i=0; i<10; i++) 
    {
        if(dizi[i] > ort || dizi[i] < ort) 
        {
            printf("%.2f\t", dizi[i]);
        }
    }


}