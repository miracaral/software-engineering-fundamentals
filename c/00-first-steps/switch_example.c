#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;


    char op;

    printf("Lutfen operator giriniz\n");
    scanf("%c", &op);

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f", &a,&b);

    switch(op)
    {
        case '+' :printf("%f + %f = %f", a,b,a + b);
        break;

        case '-' :printf("%f - %f = %f", a,b,a - b);
        break;

        case '/' :printf("%f / %f = %f", a,b,a / b);
        break;

        case '*' :printf("%f * %f = %f", a,b,a * b);
        break;

        default: printf("Hatali operator tercihi veya sayi girisi\n");
        break;
    }


    return 0;
}
