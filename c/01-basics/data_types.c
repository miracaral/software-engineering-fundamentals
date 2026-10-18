#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter='C';
    int integer_degerim=1;
    float floatsayim=5.43;
    double doublesayim=234324234123321431;

    printf("Karakterim: %c\nKarakterimin adresi: %d\n",karakter,&karakter);
    printf("Integer degerim: %d\nIntegerimin adresi: %d\n",integer_degerim,&integer_degerim);
    printf("Float degerim: %f\nFloatimin adresi: %d\n",floatsayim,&floatsayim);
    printf("Double degerim: %lf\nDoubleimin adresi: %d\n",doublesayim,&doublesayim);

    return 0;
}