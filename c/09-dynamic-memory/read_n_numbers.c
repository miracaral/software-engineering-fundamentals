#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int N,i;
    printf("N degerini giriniz\n");
    scanf("%d",&N);

    p = (int *)malloc(N * sizeof(int));
    for(i=0;i<N;i++)
    {
        printf("%d. sayi ",i+1);
        scanf("%d",&(*(p+i)));
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}