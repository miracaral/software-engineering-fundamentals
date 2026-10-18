#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ceil bir üst sayýya yuvarlama
    printf("%f\n", ceil(4.3));

    //floor bir alt sayýya yuvarlama
    printf("%f\n", floor(4.9));

    //sqrt (sayýnýn karekökünü alma)
    printf("%f\n", sqrt(36));

    //pow (üssü alýnacak sayý, alýnacak üs )
    printf("%f\n", pow(2,10));

    //abs kýsacasý mutlak deðer alma fonksiyonudur. doðru parçasýnda deðiþken sayýnýn 0 a uzaklýðýný verir.( abs bir TAM sayýnýn mutlak deðerini alýr )
    printf("%d\n", abs(-129));

    return 0;
}
