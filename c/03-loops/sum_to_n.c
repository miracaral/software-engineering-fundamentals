#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sayi,i,toplam = 0;

     printf("Lutfen bir sayi giriniz.\n");
     scanf("%d", &sayi);

     if(sayi >= 0)
     {
        /* for(i = 0; i <= sayi; i++)
        {
            toplam += i;
        } */

       /* i = 0;
       while(i <= sayi)
       {
            toplam += i;
            i++;
       } */

      i = 0;

   do {
        toplam += i;
        i++; 

      } while(i <= sayi);

        printf("Toplam degerim: %d\n", toplam);
     }
     else
     {
        printf("Lutfen pozitif bir sayi giriniz.\n");
     }

     return 0;
}