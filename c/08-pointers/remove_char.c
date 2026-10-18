#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    char eleme;
    char *can;

    printf("Lutfen bir karakter dizisi giriniz\n");
    fgets(dizi,100,stdin);
    printf("%s",dizi);
    printf("\nKarakter dizisinden cikarmak istediginiz karakter nedir?\n");
    scanf("  %c", &eleme);
    printf("  %c",eleme);
    can = dizi;
    while(*can)
    {
        if(*can==eleme)
        {
            strcpy(can,can+1);
        }
        else
        {
            can++;
        }
    }

    printf("Eleme yapildiktan sonra karakter dizimizin son hali: %s",dizi);
    return 0;
}