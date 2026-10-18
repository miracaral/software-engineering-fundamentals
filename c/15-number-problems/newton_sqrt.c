#include <stdio.h>
#include <stdlib.h>

    double karekokbul(double N)
    {
        int i;
        double karekok;
        if(N > 0.0)
        {
            karekok = N/2;
            for(i=0;i<50;i++)
            {
                karekok=((karekok*karekok)+N) / (2*karekok);
            }
            return karekok;
        }
        else if(N==0)
        {
            return 0;
        }
        else
        {
            printf("Lutfen gecerli bir deger giriniz\n");
        }   
    }
int main()
{
    double sayi;
    printf("Karekoku bulunacak sayi\n");
    scanf("%lf",&sayi);
    printf("%lf karekoku = %.3lf\n",sayi,karekokbul(sayi));

    return 0;
}