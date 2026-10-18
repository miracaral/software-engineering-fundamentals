#include <stdio.h>
#include <stdlib.h>

int mutlak(int n)
{
    if(n<0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main()
{
    int satir,i,k,bosluk;
    printf("Kac siralik baklava dilimi yapilsin?\n");
    scanf("%d",&satir);

    for(i=1,k=0;i<=satir;i++,k=0)
    {
        for(bosluk=1;bosluk<=satir-i;bosluk++)
        {
            printf(" ");
        }
        while (k != 2*i-1)
        {
            printf("*");
            k++;
        }

        printf("\n");
    }
    for(i=satir-1,k=2*i-1;i>=1;i--,k=2*i-1)
    {
        for(bosluk=satir-i;bosluk>=1;bosluk--)
        {
            printf(" ");
        }
        while (k != 0)
        {
            printf("*");
            k--;
        }
        printf("\n");

    }
    return 0;
}