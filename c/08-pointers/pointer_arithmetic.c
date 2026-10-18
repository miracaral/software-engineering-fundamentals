#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr;

    ptr = arr; // arr; ile &arr[0]; ayni seydir
    ptr++;

    // ptr++ ile ptr+1 ayni seydir

    printf("%d",ptr);

    return 0;
}