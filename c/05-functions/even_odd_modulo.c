#include <stdio.h>
#include <stdlib.h>

int tekcift(int n)
{
    return n%2;
}

int main()
{
    int sayi;
    int sonuc;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    sonuc = tekcift(sayi);
    if(sonuc==1)
    {
        printf("Sayimiz tektir\n");
    }
    else
    {
        printf("Sayimiz cifttir\n");
    }

    return 0;
}