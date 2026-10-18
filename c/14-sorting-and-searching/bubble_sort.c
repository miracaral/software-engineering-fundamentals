#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    int i,j,gecici;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);
    srand(time(0));
    int dizi[N];

    printf("Dizi elemanlari\n");
    for(i=0;i<N;i++)
    {
        dizi[i] = rand()%100;
    }
    
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=0;i<(N-1);i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    printf("\nSiralanmis dizi elemanlari:\n\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }

    return 0;
}