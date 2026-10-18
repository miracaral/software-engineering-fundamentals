#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    int size = 2*n-1;
    int start = 0;
    int end = size -1;
    int a[size][size];

    printf("Lutfen max deger giriniz\n");
    scanf("%d", &n);

    while(n != 0)
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++)
            { 
                if(i == start || i == end || j == start || j == end)
                a[i][j] = n;
            }
        }
        ++start;
        --end;
        --n;
    }
    
    return 0;
}