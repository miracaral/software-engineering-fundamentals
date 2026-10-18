#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char message[100]="C programlamayi cok seviyorum";
    char karakter;
    int i,sayac=0;

    printf("Istediginiz karakteri giriniz.\n");
    scanf("%c",&karakter);

    //printf("%c", message[0]);
    for(i=0;message[i] != '\0';i++)
    {
        if(message[i] == karakter)
        {
            sayac++;
        }
    }
    printf("Girmis oldugunuz %c karakteri %d defa kullanilmistir\n",karakter,sayac);
    return 0;
}