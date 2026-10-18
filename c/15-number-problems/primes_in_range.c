#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{   
    int kucuk,buyuk,i;
    bool asalmi = true;
    printf("Lutfen kucuk ve buyuk sayiyi giriniz.\n");
    scanf("%d%d",&kucuk,&buyuk);
    printf("%d ile %d sayisi arasindaki asal sayilar:\n",kucuk,buyuk);
    while(kucuk < buyuk)
    {
            bool asalmi = true;

            if(kucuk == 0 || kucuk == 1)
            {
                asalmi = false;
            }

        for(i = 2; i <= kucuk/2; i++)
        {
            if(kucuk % i == 0)
            {
                asalmi = false;
                break;
            }
        }
        if(asalmi)
        {
            printf("%d\n",kucuk);
        }
        kucuk++;
    }

    return 0;
}