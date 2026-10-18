#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int n)
{
    int i;
    int sonuc=1;
    for(i=1;i<=n;i++)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d! = %d\n",i,faktoriyel(i));
    }
    return 0;
}

    // 0! i nasıl alabiliriz????