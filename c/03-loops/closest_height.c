#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int no,boy,minboy,minno,fark;
    printf("Ogrenci no: \n");
    scanf("%d", &no);
    printf("Ogrencinin boyu:\n");
    scanf("%d", &boy);

    minno = no;
    minboy = boy;
    fark = abs(boy-150);

    while(no >= 0)
    {
        printf("Ogrenci no: \n");
        scanf("%d", &no);
        printf("Ogrencinin boyu:\n");
        scanf("%d", &boy);

        if(abs(boy - 150)< fark)
        {
            minno = no;
            minboy = boy;
            fark = abs(boy-150);
        }
    }
    printf("%d numarali ogrencinin %d cm boyuyla 150 cm'e en yakindir",minno,minboy);
    return 0;
}