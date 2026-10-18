#include <stdio.h>
#include <stdlib.h>

int mir(int n)
{
    if(n%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ara(int n)
{
    if(n%3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Bir sayi giriniz!\n");
    scanf("%d",&n);
    if(mir(n) == 1)
    {
        printf("Sayimiz cift sayidir\n");
    }
    if(ara(n) == 1)
    {
        printf("Sayimiz 3 ile tam bolunur\n");
    }
    if(mir(n) == 1 && ara(n) == 1)
    {
        printf("Sayimiz 6 ile tam bolunur\n");
    }
    return 0;
}