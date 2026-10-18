#include <stdio.h>
#include <stdlib.h>
#define tav_hiz 0.038
#define kus_hiz 0.012



int main()
{
    float tavsan = 1042, kus = 2272;
    int yil = 0;

    while(tavsan < kus)
    {
        tavsan = tavsan + tavsan * tav_hiz;   // tavsan += tavsan * tav_hiz (same thing.)
        kus += kus * kus_hiz;
        yil++;
        printf("%d . yil : tavsan = %d kus = %d\n", yil, (int)tavsan , (int)kus );
    }
    return 0;
}