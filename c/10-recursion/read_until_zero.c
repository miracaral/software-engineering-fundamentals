#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi==0)
    {
        exit(0);
    }
    else
    {
        sayiiste();
    }
}

int main()
{

    sayiiste();
    return 0;
}