#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
    FILE *dosya;
    int i;
    double sinus,cosinus;

    dosya=fopen("acilar.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi!\n");
    }
    else
    {
        fprintf(dosya,"DERECE\tSIN\t\t\tCOS\n");
        fprintf(dosya,"=====\t======\t  =======\n");
        for(i=0;i<=360;i++)
        {
            sinus=sin(i*PI/180);
            cosinus=cos(i*PI/180);
            fprintf(dosya,"%d\t %lf\t %lf\n",i,sinus,cosinus);
        }
    }
    fclose(dosya);
    printf("Bilgiler Dosyaya Yazildi!");
    return 0;
}