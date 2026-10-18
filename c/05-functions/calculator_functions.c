#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void topla(float x, float y, char operasyon, float *sonuc)
{
    switch(operasyon)
    {
        case '+' :
        {
            *sonuc = x + y;
            break;
        }
    }
}
void cikar(float x, float y, char operasyon, float *sonuc)
{
    switch (operasyon)
    {
        case '-' :
        {
            *sonuc = x - y;
            break;
        }
    }

}
void bol (float x, float y, char operasyon, float *sonuc)
{
    switch (operasyon)
    {
        case '/' :
        {
            *sonuc = x / y;
            break;
        }
    }
}
void carp (float x, float y, char operasyon, float *sonuc)
{
    switch (operasyon)
    {
        case '*' :
        {
            *sonuc = x * y;
            break;
        }
    }
}

int main()
{
    float x,y;
    char operator;
    float sonuc;

    printf("Kullanmak istediginiz operatoru giriniz\n");
    scanf("%c", &operator);

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f %f",&x,&y);

    topla(x,y,operator,&sonuc);
    cikar(x,y,operator,&sonuc);
    bol(x,y,operator,&sonuc);
    carp(x,y,operator,&sonuc);

    printf("Ilk sayi:%f\nIkinci sayi:%f\nOperator:%c\nSonuc:%f\n",x,y,operator,sonuc);

    return 0;


}