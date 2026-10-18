#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hesapla(float x,float y,char operasyon,float *toplam)
{
    switch (operasyon)
    {
    case '+':
    {
        *toplam = x+y;
        break;
    }
    case '-':
    {
        *toplam = x-y;
        break;
    }
    case '/':
    {
        *toplam = x/y;
        break;
    }
    case '*':
    {
        *toplam = x*y;
        break;
    }
    }

}

int main()
{
    float x,y;
    char operator;
    float toplam;

    printf("Lutfen kullanacaginiz operatoru giriniz\n");
    scanf("%c",&operator);

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&x,&y);
    hesapla(x,y,operator,&toplam);
    printf("Ilk sayi:%f\nIkinci sayi:%f\nOperator:%c\nToplam:%f\n",x,y,operator,toplam);

    return 0;
}