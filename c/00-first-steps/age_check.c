#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;

    printf("Lutfen yasinizi giriniz\n");
    scanf("%d", &yas);

    if(yas >= 18)
    {
        printf("Oy kullanma hakkina sahipsiniz!\n", yas);
    }
    else
    {
        printf("Yasiniz geregi oy kullanamazsiniz!\n", yas);
    }
    return 0;
}
