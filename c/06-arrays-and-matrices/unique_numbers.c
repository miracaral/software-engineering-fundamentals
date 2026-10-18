#include <stdio.h>
#include <stdbool.h>

#define MAX_NUMBERS 10

bool isUnique(int *array, int size, int number);

int main()
{
    int numbers[MAX_NUMBERS]; 
    int count = 0;           
    int sum = 0;             
    int input;              

    printf("Enter 10 unique integers greater than 1:\n");

    while (count < MAX_NUMBERS)
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &input);

        if (input > 1 && isUnique(numbers, count, input))
        {
            *(numbers + count) = input;
            sum += input;              
            count++;                   
        }
        else
        {
            printf("Invalid or duplicate number entered. Please try again.\n");
        }
    }

    printf("\nNumber of elements in the array: %d\n", count);
    printf("Array elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", *(numbers + i));
    }
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}


bool isUnique(int *array, int size, int number) {
    for (int i = 0; i < size; i++) {
        if (*(array + i) == number) {
            return false;
        }
    }
    return true;
}