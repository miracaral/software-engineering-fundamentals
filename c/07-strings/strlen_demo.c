#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /* char message[100]="Merhaba";
    printf("%s degerinin boyu %d\n",message,strlen(message));
    */

    char message[100];
    printf("String bir ifade giriniz.\n");

    //scanf("%s",&message); scanf ile kullanilirsa bosluk kullanildiginda alma islemi kesilir!!

    fgets(message,100,stdin);

    printf("String ifademizin boyu: %d\n",strlen(message));
    return 0;
}