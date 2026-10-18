#include <stdio.h>
#include <stdlib.h>

struct Integer
{
    int data;
    int frequency;
};

int getFrequency(struct Integer *array, int number);
void print(struct Integer *array);
int wasItHere(struct Integer *array, int index,int number);

int main()
{
    struct Integer *numbers = (struct Integer *)malloc(10 * sizeof(struct Integer));
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d. tamsayi: ",i+1);
        scanf("%d",&numbers[i].data);
        numbers[i].frequency = 1;
    }
    for(i=0;i<10;i++)
    {
        numbers[i].frequency = getFrequency(numbers,numbers[i].data);
    }
    print(numbers);

    return 0;
}

int getFrequency(struct Integer *array, int number)
{
    int i;
    int counter = 0;
    for(i=0;i<10;i++)
    {
        if(array[i].data == number)
        {
            counter++;
        }
    }
    return counter;

}

void print(struct Integer *array)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(array[i].frequency > 1)
        {
            if(wasItHere(array,i,array[i].data))
            {
                printf("Frequency of %d: %d\n",array[i].data,array[i].frequency);
            }
            
        }
    }
}

int wasItHere(struct Integer *array, int index, int number)
{
    int i;
    for(i=0;i<index;i++)
    {
        if(array[i].data == number)
        {
            return 0;
        }
    }
    return 1;
}
