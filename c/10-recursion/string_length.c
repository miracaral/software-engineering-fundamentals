#include <stdio.h>
#include <stdlib.h>

int karakter(char *s)
{

    if(*s=='\0')
    {
        return 0;
    }
    else
    {
        return (1+karakter(s+1));
    }
}

int main()
{
    char cumle[100];
    printf("Lutfen bir cumle giriniz\n");
    fgets(cumle,100,stdin);
    printf("Karakter sayisi = %d\n",karakter(cumle)-1);

    return 0;
}