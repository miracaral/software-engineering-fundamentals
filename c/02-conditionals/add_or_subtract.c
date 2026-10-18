#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int no1,no2;

    printf("Lutfen islem seciniz(+,-)\n");
    scanf("%c", &op);

    printf("Lutfen 2 adet tam sayi giriniz.\n");
    scanf("%d%d", &no1,&no2);

    if((no1 == 0 || no2 == 0))
    {
        printf("Islem yapilamiyor.\n");
    }
    else
    {
        
        switch(op)
        {
            case '+':
            printf("1/%d %c 1/%d = ", no1,op,no2);
            printf("%d/%d\n", no1+no2,no1*no2);
            break;

            case '-':
            printf("1/%d %c 1/%d = ", no1,op,no2);
            printf("%d/%d\n", no1-no2, no1*no2);
            break;

            default:
                printf("Yanlis operatör girdiniz.\n");
        }
    }
    return 0;
}