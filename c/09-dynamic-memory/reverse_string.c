#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char *metin;
        int i;
        metin = (char *)malloc(50*sizeof(char));

        printf("Lutfen bir cumle giriniz\n");
        fgets(metin,50,stdin);
        for(i=strlen(metin)-1;i>=0;i--)
        {
            printf("%c",*(metin+i));
        }

        free(metin);


    return 0;
}