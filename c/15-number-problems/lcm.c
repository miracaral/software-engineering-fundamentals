#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int sayi1,sayi2,ekok;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d%d", &sayi1,&sayi2);

    if(sayi1 > sayi2)
    {
        ekok = sayi1;
    }
    else
    {
        ekok =sayi2;
    }

    while(1)
    {
        if(ekok % sayi1 == 0 && ekok % sayi2 == 0)
        {
            printf("Ekok degerim: %d\n",ekok);
            break;
        }
        else
        {
            ekok++;
        }
    }

    return 0;
}