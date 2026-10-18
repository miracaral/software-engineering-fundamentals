#include <stdio.h>
#define MAX_SIZE 100

void bastir(int *arr, int N)
{
    printf("Degerlerim:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*arr);
        arr++;
    }

}

int main()
{
    int source_arr[100];
    int dest_arr[100];
    int N;
    int *source_ptr;
    int *dest_ptr;
    int *end_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;

    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",(source_ptr+i));
        
    }

    end_ptr = &source_arr[N-1];

    printf("\nKaynak arrayimi kopyalamadan once ");
    bastir(source_arr,N);

    while(source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }
    
    printf("\nKopyalandiktan sonraki source arrayim: \n");
    bastir(source_arr,N);

    printf("\nKopyalandiktan sonraki destination arrayim: \n");
    bastir(dest_arr,N);

    return 0;
}
