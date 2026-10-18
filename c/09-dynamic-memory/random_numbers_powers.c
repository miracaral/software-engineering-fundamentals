#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int *p,i,N;

    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);

    p = (int *)malloc(N*sizeof(int));
    srand(time(0));
    printf("Uretilen Sayilar\n");
    for(i=0;i<N;i++)
    {
        *(p+i) = rand()%100;
        printf("%d  ",*(p+i));
    }
    printf("\n");
    printf("Kareleri:");
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d  ",(*(p+i)) * (*(p+i)));
    }

    return 0;
}