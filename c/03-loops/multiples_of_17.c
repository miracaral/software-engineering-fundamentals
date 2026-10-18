#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i,satirelemani;

    printf("Limiti belirleyiniz.\n");
    scanf("%d", &limit);

    i = 0;
    satirelemani = 0;
    while(i <= limit)
    {
        if(i % 17 == 0)
        {
            printf("%5d", i);
            satirelemani++;
            if(satirelemani % 10 == 0)
            {
                printf("\n");
            }
        }
        i++;
    }

    return 0;

}