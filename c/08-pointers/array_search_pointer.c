#include <stdio.h>

void bastir(int *array,int size)
{
    int *arrEnd;
    arrEnd = (array + size - 1);

    while(array <= arrEnd)
    {
        scanf("%d",array++);
    }
}

int ara(int *arr,int size,int toSearch)
{
    int index = 0;

    int *arrEnd;
    arrEnd = (arr + size - 1);

    while(arr <= arrEnd && *arr != toSearch)
    {
        arr++;
        index++;
    }
    if(arr <= arrEnd)
    {
        return index;
    }

    return -1;
}


int main()
{
    int array[100];
    int size,toSearch,searchIndex;

    printf("Dizimiz kac elemanli olsun\n");
    scanf("%d",&size);

    printf("Dizimizin elemanlari\n");
    bastir(array,size);

    printf("Hangi elemani ariyorsun\n");
    scanf("%d",&toSearch);

    searchIndex = ara(array,size,toSearch);

    if(searchIndex == -1)
    {
        printf("%d elemani dizinde bulunmuyor\n",toSearch);

    }
    else
    {
        printf("%d elemani %d. pozisyonda bulunuyor",toSearch,searchIndex+1);
    }

    return 0;
}