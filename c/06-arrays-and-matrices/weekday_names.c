#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char gun[7][50]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
   int n;

do
{
    printf("Lutfen 1 ile 7 arasinda bir deger giriniz\n");
    scanf("%d", &n);
}while(n<=0 || n>7);

printf("%d numarali haftanin gunu: %s\n",n,gun[n-1]);

return 0;
}