#include <stdio.h>
#include <stdlib.h>
#define N 10


int main()
{
    int i,min,max;
    int *canan;
    int can[N];
    printf("%d kadar deger giriniz\n",N);
    for(canan=can;canan<can+N;canan++)
    {
        scanf("%d",canan);
    }
    max = min = can[0];
    for(canan=can+1;canan<can+N;canan++)
    {
        if(*canan > max)
        {
            max = *canan;
        }
        if(*canan < min)
        {
            min = *canan;
        }
    }
    printf("Dizimizin max degeri: %d\n",max);
    printf("Dizimizin min degeri: %d\n",min);

    

    return 0;
}