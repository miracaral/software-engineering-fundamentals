#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anamatris[10][10],transpose[10][10],satir,sutun,i,j;

    printf("Satir sayisini giriniz.\n");
    scanf("%d", &satir);

    printf("Sutun sayisini giriniz.\n");
    scanf("%d", &sutun);

    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            printf("Anamatris[%d][%d]:",i,j);
            scanf("%d", &anamatris[i][j]);
        }
    }
    printf("Anamatris:\n");
    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            printf("%4d", anamatris[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
        {
            transpose[j][i]= anamatris[i][j];
        }
    }

    printf("Transpose Matris:\n");
    for(i = 0; i < sutun; i++)
    {
        for(j = 0; j < satir; j++)
        {
            printf("%4d",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}