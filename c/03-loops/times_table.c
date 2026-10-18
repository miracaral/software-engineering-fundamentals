#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i;

    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d", &sayi);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", sayi,i,sayi * i);
    }
    
    return 0; 
}