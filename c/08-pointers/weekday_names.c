#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gun[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
    int i;
    do
    {
        printf("Lutfen 1 ve 7 arasinde bir tam sayi degeri giriniz: \n");
        scanf("%d",&i);

    } while(i<=0 || i>7);
    printf("%d numarali haftanin gunu %s\n",i,gun[i-1]);

    return 0;    
}