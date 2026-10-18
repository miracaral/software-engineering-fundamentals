 #include <stdio.h>
 #include <stdlib.h>

int main()
{
    float fah,cel;

    printf("Lutfen Fahrenheit degerini giriniz\n");
    scanf("%f", &fah);

    cel = (fah-32)*5/9;

    printf("Celcius degeriniz: %f\n",cel);
    
    return 0;
}