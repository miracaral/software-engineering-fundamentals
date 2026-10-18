#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tersCumle(char *metin, int boy)
{
    if(boy==0)
    {
        printf("%c\n",metin[boy]);
    }
    else
    {
        printf("%c",metin[boy]);
        tersCumle(metin,boy-1);
    }
}

int main()
{
    char cumle[100];
    printf("Lutfen bir cumle giriniz\n");
    fgets(cumle,100,stdin);
    printf("Karakter sayisi: %lu\n",strlen(cumle)-1);
    printf("Cumlenin Tersi:");
    tersCumle(cumle,strlen(cumle)-1);

    return 0;
}
//gets sadece karsilastirma programlarinda kullaniliyor!
//fgets ile sorunsuz yapilir fakat beklenilen karakterin 1 fazlasi output verilir!!!
//Bu yuzden printf'e 1 eksigini yaziniz!