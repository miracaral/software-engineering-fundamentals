#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d", &x);

    int i = 1;

    do
    {
        printf("%d\n", i*x);
        i++;
    }
    while (i <= 10);

    return 0;
}
