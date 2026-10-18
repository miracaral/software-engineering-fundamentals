#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int array[10];
    int periyod;
    printf("10 gunluk hisse deger listesini giriniz.\n\n");
    for(i=0;i<10;i++)
    {
        printf("%d. gun hisse degeri: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nPeriyodu kac gun olsun?\n");
    scanf("%d",&periyod);

//4 luleri gezecek for dongusu
    for(i=0;(i + periyod) <= 10;i++)
    {
        int total = 0;
        for(j=i;j < (i + periyod);j++)
        {
            total = total + array[j];
        }
        float average = (float) total / periyod;
        printf("%d. Periyod sonucu: %f\n",(i+1),average);
    }
    return 0;
}