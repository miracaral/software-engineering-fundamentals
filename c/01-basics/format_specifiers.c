#include <stdio.h>

int main(void)
{
    float sayi = 6.23;
    double sayi2 = 6.66;

    printf("%.6f\n %.2lf", sayi,sayi2);

    return 0;   
}

/* int (4 bytes) | %i or %d
   double (8 bytes) | %lf
   float (4 bytes) | %f
   char (1 bytes) | %c       */