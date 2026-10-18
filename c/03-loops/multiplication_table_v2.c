#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j;

    printf("%4c",'I');
    for(i = 1; i<=10; i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    for(i=1;i<=12;i++)
    {
        printf("----");
    }
    printf("\n");

    printf("%4c",'|');
    for(j=1;j<=12;j++)
    {
        printf("|");
    }
    printf("\n");

    for(i=1;i<=10;i++)
    {
        printf("%4d",i);
        for(j=1;j<=10;j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    return 0;
}