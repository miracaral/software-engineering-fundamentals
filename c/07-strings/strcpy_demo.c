#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ilk[100],ikinci[100];
    printf("Ilk degeri giriniz\n");
    scanf("%s",&ilk);

    strcpy(ikinci,ilk);

    printf("Ilk degerim: %s\n",ilk);
    printf("Ikinci degerim:%s\n",ikinci);
    return 0;
}