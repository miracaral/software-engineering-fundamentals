#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *p1,*p2,*sonuc;
    int N,M,i;
    int sayac;

    printf("Birinci dizi icin kac tane sayi uretilecek\n");
    scanf("%d",&N);
    printf("Ikinci dizi icin kac tane sayi uretilecek\n");
    scanf("%d",&M);

    
    p1 = malloc(N * sizeof(int));
    p2 = malloc(M * sizeof(int));

    srand(time(0));
    printf("Birinci dizi elemanlari:\n");

    for(i=0;i<N;i++)
    {
        *(p1+i) = rand()%10;
        printf("%d  ",*(p1+i));
    }
    printf("\n");

    printf("Ikinci dizi elemanlari:\n");

    for(i=0;i<M;i++)
    {
        *(p2+i) = rand()%10;
        printf("%d  ",*(p2+i));
    }
    sonuc = malloc(N+M * sizeof(int));
    printf("\nBirlestirilmis Dizi\n");
    for(i=0;i<N;i++)
    {
        *(sonuc+sayac) = *(p1+i);
        sayac++;
    }
    for(i=0;i<M;i++)
    {
        *(sonuc+sayac) = *(p2+i);
        sayac++;
    }
    for(i=0;i<sayac;i++)
    {
        printf("%d ",*(sonuc+i));
    }

    free(p1);
    free(p2);
    free(sonuc);

    return 0;
}