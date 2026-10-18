#include <stdio.h>
#include <stdlib.h>

int kare(int can)
{
    int sonuc = can * can;
    return sonuc;
}

int main()
{
    int x = 4, karesi;
    karesi = kare(x);

    printf("%d", karesi);
    return 0;
}