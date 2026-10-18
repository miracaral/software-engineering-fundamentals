#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int arr[6];
    int min = arr[0];
    
    arr[0] = 14;
    arr[1] = 23;
    arr[2] = 7;
    arr[3] = 45;
    arr[4] = 68;
    arr[5] = 9;

for(i = 0;i < 6;i++)
{
    printf("%d\n",arr[i]);
}
printf("Sayilarin en kucugu: ");
for(i = 1;i < 6;i++)
{
    if(min > arr[i])
    {
        min = arr[i];
    }
}
printf("%d\n",min);

    return 0;
}