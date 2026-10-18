#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    char start = 'A',input;

    printf("Lutfen yarim piramidi sonlandirmak istediginiz karakteri giriniz.\n");
    scanf("%c", &input);

    for(i = 1; i <= (input-'A'+1);i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ",start);
        }
        start++;
        printf("\n");
    }
}
