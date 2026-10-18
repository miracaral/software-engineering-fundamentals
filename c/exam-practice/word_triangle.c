#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(void)
{
    char str[6];
    scanf("%s", str);
    
    int len = strlen(str);

    for(int j = len; j > 0; j--)
    {
        for(int i = 0; i < j; i++)
        {
            printf("%c ", str[i]);
        }
        printf("\n");   
    }
    

    

    return 0;
}