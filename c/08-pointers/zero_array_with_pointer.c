#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int i;
    int *pt;

    for(pt = t;pt < t+100;pt++)
    {
        *pt = 0;
    }
    for(pt = t;pt < t+100;pt++)
    {
        printf("%d\n",*pt);
    }

    /* for(i=0;i<100;i++)
    {
        t[i]=0;
    }
    for(i=0;i<100;i++)
    {
        printf("%d\n",t[i]);
    } */
    
    return 0;
}