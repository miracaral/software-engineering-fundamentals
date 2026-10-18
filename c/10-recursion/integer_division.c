#include <stdio.h>
#include <stdlib.h>

int bolum(int bolunen,int bolen)
{
    if(bolen==0)
    {
        return 0;
    }
    else if(bolunen-bolen==0)
    {
        return 1;
    }
    else if(bolunen<bolen)
    {
        return 0;
    }
    else
    {
        return (1+bolum(bolunen-bolen,bolen));
    }
}

int main()
{
    int a,b;

    printf("Bolunen sayiyi giriniz\n");
    scanf("%d",&a);
    printf("Lutfen bolen sayiyi giriniz\n");
    scanf("%d",&b);
    printf("Bolum = %d\n",bolum(a,b)); // a = bolunen, b = bolen
    printf("Kalan = %d\n",a-(bolum(a,b)*b));
    return 0;
}