#include <stdio.h>
#include <stdlib.h>

int ikininkuvvetleri(int n)
{
    int deger;
    if(n==0)
    {
        deger=1;
    }
    else
    {
        deger=2*ikininkuvvetleri(n-1);
    }
    printf("%d\n",deger);
    return deger;
}

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    printf("%d ye kadar olan 2 nin kuvvetleri",sayi);
    ikininkuvvetleri(sayi);

    return 0;
}