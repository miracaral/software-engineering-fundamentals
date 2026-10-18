#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2;
    int i,N;
    int ciftadeti=0;
    int tekadeti=0;

    printf("Lutfen bir tamsayi giriniz\n");
    scanf("%d",&N);

    p1 = (int *)malloc(N*sizeof(int));
    p2 = (int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            *(p1+ciftadeti)=i;
            ciftadeti++;
        }
        else
        {
            *(p2+tekadeti)=i;
            tekadeti++;
        }
    }
    
    printf("Cift sayilar\n");
    for(i=0;i<ciftadeti;i++)
    {
        printf("%d  ",*(p1+i));
    }
    printf("\n");

    printf("Tek sayilar\n");
    for(i=0;i<tekadeti;i++)
    {
        printf("%d  ",*(p2+i));
    }

    free(p1);
    free(p2);
    return 0;
}