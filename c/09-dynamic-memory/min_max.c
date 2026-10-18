#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int *p;
    int N,i;
    int enk;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);
    
    p = (int *)malloc(N*sizeof(int));

    srand(time(0));
    for(i=0;i<N;i++)
    {
        *(p+i) = rand()%50;
        printf("%d  ",*(p+i));
    }
    printf("\n");
    enk = *p;
    for(i=1;i<N;i++)
    {
        if(*(p+i)<enk)
        {
            enk = *(p+i);
        }
    }
    printf("En kucuk tamsayi = %d\n",enk);    
    free(p);
    return 0;
}