#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sonuc,i;

    printf("Lutfen sayi giriniz.\n");
    scanf("%d", &a);

    i = 1;
    sonuc = 0; 
    while(i <= a)
    {
    if(i == a)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d + ", i);
        
    }
        sonuc += i;
        i++;
    }
        printf(" = %d\n", sonuc);

    return 0;
}