#include <stdio.h>
#include <stdlib.h>

void ussunu_al(int a, int b, int *can)
{
    int i;
    *can = 1;
    for(i = 0;i < b; i++)
    {
        *can = *can * a;
    }

}

int main()
{
    int x=4, y=5, sonuc;
    ussunu_al(x,y,&sonuc);
    printf("%d", sonuc);
    return 0;
}