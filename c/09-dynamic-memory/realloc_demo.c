#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    n=5;
    int i;
    printf("Girdigimiz sayi degeri %d\n",n);

    //ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)calloc(n , sizeof(int)); //TEK FARKI VIRGULLE AYRILMASI

    if(ptr==NULL)
    {
        printf("Hafiza bolunemedi!\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }

        printf("Elemanlarim\n");
        for(i=0;i<n;i++)
        {
            printf("%d,",ptr[i]);
        }
        printf("\n\n");
        n=10;
        printf("Girdigimiz sayi degeri %d\n",n);

        ptr=realloc(ptr,n * sizeof(int));
        printf("Bellek basarili bir sekilde tekrar ayrildi\n");
        for(i=5;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("Elemanlarim\n");
        for(i=0;i<n;i++)
        {
            printf("%d,",ptr[i]);
        }
        free(ptr);
    }

    return 0;
}