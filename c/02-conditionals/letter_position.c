#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sira;
    char ch;
    printf("Bir karakter giriniz.\n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        {
            sira = (int)ch - (int) 'A' + 1;
            printf("%c : %d. harftir.\n",ch,sira);
        }

    else if(ch >= 'a' && ch <= 'z')
        {
            sira = (int)ch - (int) 'a' + 1;
            printf("%c : %d. harftir.\n",ch,sira);
        }
    else
    {
        printf("Boyle bir harf yoktur.\n"); 
    }

        return 0;
}