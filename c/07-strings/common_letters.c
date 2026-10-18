
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, j, k = 0;
    char str1[] = "Ankara";
    char str2[] = "Balikesir";
    char ortak[10] = {'\0'};

    for (i = 0; i < strlen(str1); i++)
    {
        for (j = 0; j < strlen(str2); j++)
        {

            if (tolower(str1[i]) == tolower(str2[j]))
            {

                int alreadyExists = 0;
                for (int l = 0; l < k; l++)
                {
                    if (tolower(ortak[l]) == tolower(str1[i]))
                    {
                        alreadyExists = 1;
                        break;
                    }
                }

                if (!alreadyExists)
                {
                    ortak[k] = str2[j];
                    k++;
                }
                break;
            }
        }
    }

    ortak[k] = '\0';

    printf("Ortak harfler: %s\n", ortak);

    return 0;
}
