#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,kalan,ters = 0;
    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&n);

    while(n != 0)
    {
        kalan = n % 10;
        ters = ters * 10 + kalan;
        n /= 10;
    }
    printf("Sayimizin ters cevrilmis hali: %d",ters);

    return 0;
}