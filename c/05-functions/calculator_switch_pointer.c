#include <stdio.h>
#include <stdlib.h>

void calculate(float st,float nd,char operation,float *operationresult)
{

    switch(operation)
    {
        case '+' :
        {
            *operationresult = st + nd;
            break;
        }
        case '-' :
        {
            *operationresult = st - nd;
            break;
        }
        case '/' :
        {
            *operationresult = st / nd;
            break;
        }
        case '*' :
        {
            *operationresult = st * nd;
            break;
        }
    }

}

int main()
{
    float first_num,sec_num;
    char operator;
    float result;
    printf("Which operation do you want to?\n");
    scanf("%c",&operator);

    printf("Please text 2 numbers!\n");
    scanf("%f%f",&first_num,&sec_num);

    calculate(first_num,sec_num,operator,&result);
    printf("First number: %.2f\nSecond number: %.2f\nOperation: %c\nResult: %.2f\n",first_num,sec_num,operator,result);
    return 0;
}