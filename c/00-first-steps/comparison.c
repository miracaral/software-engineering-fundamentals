#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 25;

   int y = 20;

   /*  &&: ve
       ||: ya da
       ! : deðili / tersi (mantýk problemlerindeki ters üs gibi) */

   printf("%d", !(x > 10 || x < 20));

   return 0;
}
