#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    char a= 'a', st='*';

    for(int i = 0; i < 6; i++)
    {
        for(int k=0; k < 6-i; k++)
        {
            printf(" ");
            if(k==5-i)
            {
                printf("%c", a);
            }
            else
            continue;
        }
        for(int j = 0; j < 2*i-1; j++)
        {
            
            printf("%c", st);
        }
        
        printf("\n");
    }
    return 0;
    

}

