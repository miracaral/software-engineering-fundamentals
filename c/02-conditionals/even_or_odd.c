#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int sayi;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
    {
        printf("Bu sayi çifttir");
    }
    else 
    {
        printf("Bu sayi tektir");
    }
    return 0;
}