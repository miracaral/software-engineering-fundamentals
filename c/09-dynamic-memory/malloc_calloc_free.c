#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,*ptr1;
    int n;
    n=5;
    int i;
    printf("Girdigimiz sayi degeri %d\n",n);

    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n , sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Bellekten ayirma islemi basarisiz\n");
        exit(0);
    }
    else
    {
        printf("Malloc kullanilarak basarili bir sekilde ayirma islemini yaptim\n");
        free(ptr);
        printf("Malloc icin ayrilan yer serbest birakildi!\n");

        printf("Calloc kullanilarak basarili bir sekilde ayirma islemini yaptim\n");
        free(ptr1);
        printf("Calloc icin ayrilan yer serbest birakildi!\n");
    }

    return 0;
}