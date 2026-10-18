#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Lutfen bir deger giriniz.\n");
    scanf("%d", &a);


//while condition works until the expression in the parentheses are true
    while(a != 0)
    {
        printf("%d\n\n", a);
        a = a-1;
    }

    return 0;
}