#include <stdio.h>
#include <stdlib.h>

union hesapla
{
    int cevre;
    int alan;

};

int main()
{
    int yaricap;
    union hesapla bul;

    printf("Lutfen yaricapi giriniz\n");
    scanf("%d",&yaricap);

    bul.cevre=2*3*yaricap;
    printf("Cevresi=%d\n",bul.cevre);

    bul.alan=3*yaricap*yaricap;
    printf("Alan=%d\n",bul.alan);


    return 0;

}