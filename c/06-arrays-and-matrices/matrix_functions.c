#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

void init_tablo(int mir[A][B])
{
    int i,j;
    printf("%d * %d boyutunda bir matris giriniz\n",A,B);
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            scanf("%d",&mir[i][j]);

        }
    }
}
void print_tablo(int mir[A][B])
{
    int i,j;
    printf("Tablomuz su sekilde gozukmektedir\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%4d",mir[i][j]);
        }
        printf("\n");
    }
}

void calcul(int mir[A][B],int *max, int *min,int *toplam)
{
    int i,j;
    *max = mir[0][0];
    *min = mir[0][0];
    *toplam = 0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(mir[i][j] > *max)
            {
                *max = mir[i][j];
            }
            if(mir[i][j] < *min)
            {
                *min = mir[i][j];
            }
            *toplam = *toplam + mir[i][j];
        }
    }
}

int main()
{
    int min,max,toplam;
    int mir[A][B];
    init_tablo(mir);
    print_tablo(mir);
    calcul(mir,&max,&min,&toplam);
    printf("Maximum degeriniz: %d\n",max);
    printf("Minimum degeriniz: %d\n",min);
    printf("Toplam degeriniz: %d\n",toplam);
    
    return 0;
} 