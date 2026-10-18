#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][4] = {{1,3,7,8},{3,5,9,1},{7,9,2,6}};
    int dizi2[3][4] = {{3,4,6,7},{6,4,7,9},{1,3,5,2}};
    int toplam[3][4];
    int i,j;

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4; j++)
        {
            toplam[i][j] = dizi1[i][j]+ dizi2[i][j];
        }
    }

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4; j++)
        {
            printf("%4d", toplam[i][j]);
        }
        printf("\n");
    }

    return 0;





}
