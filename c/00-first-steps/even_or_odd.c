#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &sayim);

    if(sayim%2 == 0)
    {
        printf("Bu sayi (%d) cifttir", sayim);
    }
    else
    {
        printf("Bu sayi (%d) tektir", sayim);
    }




    return 0;
}
