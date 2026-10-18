#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[100];
    int i=0;
    printf("Lutfen bir cumle giriniz.\n");
    fgets(cumle,100,stdin);

    while(cumle[i])
    {
        printf("%c\n", cumle[i]);
        i++;
    }

    while(cumle[i] !='\0')
    {
        printf("%c\n", cumle[i]);
        i++;
    }

    while(cumle[i] != NULL )
    {
        printf("%c\n", cumle[i]);
        i++;
    }


    return 0;
}