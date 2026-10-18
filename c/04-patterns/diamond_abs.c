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

    for(i=1,k=0;i<=satir,k<=2*i-1;i++,k++)
    {
        for(bosluk=1;bosluk <= satir-1;bosluk++)
        {
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}