#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun;
    int i,j;
    int **matris; //matris[i][j] ilk yildiz i yi ikincisi j yi gosteriyor

    printf("Lutfen satir sayisini giriniz\n");
    scanf("%d",&satir);

    printf("Lutfen sutun sayisini giriniz\n");
    scanf("%d",&sutun);

    matris = (int **)calloc(satir,sizeof(int *));

    for(i=0;i<satir;i++)
    {
        matris[i] = (int *)calloc(sutun,sizeof(int));
        for(j=0;j<sutun;j++)
        {
            printf("Matris[%d][%d] = ",i,j);
            scanf("%d",&(matris[i][j]));
        }
    }

    for(i=0;i<satir;i++)
    {
        
        for(j=0;j<sutun;j++)
        {
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }


//Buyuk olcekli projelerde sorun yaratacagindan hafizadakileri silmeliyiz
    for(i=0;i<satir;i++)
    {
        free((void *)matris[i]);
    }

    free((void *)matris );
    return 0;
}