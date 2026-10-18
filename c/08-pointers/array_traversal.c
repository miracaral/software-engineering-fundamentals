#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *pointer;
    int i;

    printf("Dizimizin ilk hali: \n");
    for(i=0;i<15;i++)
    {
        printf("%4d",*(dizi+i));
    }
    printf("\n");
    printf("Dizimizdeki cift sayilar: \n");
    for(i=0;i<15;i+=2)
    {
        printf("%4d",*(dizi+i));
    }
    printf("\n");
    printf("Dizimizdeki tek sayilar: \n");
    for(pointer=dizi+1;pointer<dizi+15;pointer+=2)
    {
        printf("%4d",*pointer);
    }
    printf("\n");
    return 0;
}