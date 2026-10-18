#include <stdio.h>
#include <stdlib.h>

void teksayilar(int n)
{
    int i=0;
    while(i<=n)
    {
        if(i%2 == 1)
        {
            printf("%d\n",i);
        }
        i++;
    }
}

int main()
{
    int sayi;
    printf("Lutfen pozitif bir tamsayi giriniz\n");
    scanf("%d",&sayi);

    teksayilar(sayi);

    return 0;
}