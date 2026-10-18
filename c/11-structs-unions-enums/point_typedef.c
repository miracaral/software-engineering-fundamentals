#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x_ekseni;
    float y_ekseni;
}nokta;

/* struct nokta
{
    float x_ekseni;
    float y_ekseni;
}; */

int main()
{
    //eger typedef yöntemiyle atama yapacaksaniz mainde struct belirtmenize gerek yok!
    /* struct */ nokta can;
    can.x_ekseni=3;
    can.y_ekseni=2;

    printf("X eksenimiz %.2f Y eksenimiz %.2f\n",can.x_ekseni,can.y_ekseni);
    return 0;
}