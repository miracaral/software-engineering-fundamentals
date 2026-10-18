#include <stdio.h>
#include <stdlib.h>

void bolunebilirlik(int *n)
{
    if(*n%2 == 0)
    {
        printf("Sayimiz cift sayidir\n");
    }
    if(*n%3 == 0)
    {
        printf("Sayimiz 3 un katidir\n");
    }
    if((*n%2 == 0) && (*n%3 == 0))
    {
        printf("Sayimiz 6'nin tam katidir\n");
    }
}

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz!\n");
    scanf("%d",&sayi);

    bolunebilirlik(&sayi);
    
    return 0;
}