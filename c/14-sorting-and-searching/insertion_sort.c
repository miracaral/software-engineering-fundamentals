#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int N,i,j;
    int gecici;

    printf("Kac Adet sayi uretilecek\n");
    scanf("%d",&N);
    srand(time(0));
    
    int dizi[N];

    printf("Dizi elemanlari\n");

    for(i=0;i<N;i++)
    {
        dizi[i] = rand()%1000;
    }

    printf("\nDizi elemanlari\n");

    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=1;i<N;i++)
    {
        j=i;
        while (j>0 && dizi[j]<dizi[j-1])
        {
            gecici = dizi[j];
            dizi[j] = dizi[j-1];
            dizi[j-1] = gecici;

            j--;
        }
        
    }
    printf("\nSiralanmis Dizi Elemanlari\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }

    return 0;
}