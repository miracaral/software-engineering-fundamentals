#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day = 6;
   /* switch(day)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Salý");
        break;
        case 3:printf("Carsamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;

        default :printf("Gecersiz Gun");
        break;

    } */

    if(day == 1)
    {
        printf("Pazartesi");
    }
    else if (day == 2)
    {
        printf("Sali");
    }
    else if (day == 3)
    {
        printf("Car");
    }
    else if (day == 4)
    {
        printf("Per");
    }
    else if (day == 5)
    {
        printf("Cm");
    }
    else if (day == 6)
    {
        printf("Cmt");
    }
    else if (day == 7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Boyle bir gun yok :p");
    }



    return 0;
}
