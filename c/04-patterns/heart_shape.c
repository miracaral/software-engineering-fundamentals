#include <stdio.h>
#include <math.h>


int main()
{
    double x, y;
    char star = '*';
    char space = ' ';


    for (y = 1.3; y > -1.3; y -= 0.1)
    {
        for (x = -1.3; x < 1.3; x += 0.05)
        {
            
            // Formül: (x^2 + y^2 - 1)^3 - x^2*y^3 <= 0
            
            double sayi = x * x + y * y - 1.0;
            double result = pow(sayi, 3) - (x * x * pow(y, 3));

            if (result <= 0.0)
            {
                printf("%c", star);
            }
            else
            {
                printf("%c", space);
            }
        }
        printf("\n");
    }

    return 0;
}