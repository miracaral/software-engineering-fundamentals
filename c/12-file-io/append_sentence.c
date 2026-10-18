#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char cumle[100];
    int i;

    dosya=fopen("bilgi3.txt","a");

    if(dosya==NULL)
    {
        printf("Dosya bulunamadi");
    }
    else
    {
        printf("Lutfen bir cumle giriniz\n");
        fgets(cumle,100,stdin);

        for(i=0;cumle[i];i++)
        {

            putc(cumle[i],dosya);
        }

    }

    putc('\n',dosya);
    fclose(dosya);
    printf("Bilgiler eklendi\n");
    return 0;
}