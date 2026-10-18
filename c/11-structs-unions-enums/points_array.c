#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char isim[10];
    float x_ekseni;
    float y_ekseni;
}nokta;
// struct nokta seklinde atanacaksa asagida "struct nokta p[]" seklinde tanimlanmali
void ekranayazdir(nokta p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s = (%.0f,%.0f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
    }
}

int main()
{
    nokta can[5]={{"Can",3,4},{"Hakan",5,3},{"Osman",2,4},{"Deniz",4,3},{"Merve",1,6}};
    ekranayazdir(can,5);

    return 0;
}