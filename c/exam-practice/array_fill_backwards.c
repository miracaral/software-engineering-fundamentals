/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    int dizi[10];
    printf("Lutfen 10. eleman degerini giriniz: ");
    scanf("%d", &dizi[9]);
    for(int i=9; i>0; i--)
    {
        if(dizi[9] > 0)
        {
            dizi[i-1] = dizi[i] + 2;
            printf(" %d. elemanin degeri: %d\n",i, dizi[i-1]);
        
        }
        else if(dizi[9] < 0)
        {
            dizi[i-1] = dizi[i] - 2;
            printf(" %d. elemanin degeri: %d\n",i, dizi[i-1]);
        }
        else
        {
            printf("Yanlis giris\n");
            break;
        }
    }
    
    
} */

#include <stdio.h> // ptr cozumu
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    int dizi[10];
    int *p = dizi; //dizinin baslangic adresini p pointerina atadik
    printf("Lutfen 10. eleman degerini giriniz: ");
    scanf("%d", p+9); //scanf adres aldigi icin yildiz koymaya gerek yok

    for(int i=9; i>0; i--)
    {
        if(*(p+9)>0)
        {
            *(p+i-1) = *(p+i) + 2;
            printf("%d. elemanin degeri: %d\n", i, *(p+i-1));
        }
        else if(*(p+9)<0)
        {
            *(p+i-1) = *(p+i) - 2;
            printf("%d. elemanin degeri: %d\n", i, *(p+i-1));
        }
        else
        {
            printf("Yanlis giris\n");
            break;
        }
    }
    
    
    
}

