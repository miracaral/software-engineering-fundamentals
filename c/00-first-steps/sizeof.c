#include <stdio.h>
#include <stdlib.h>

int main()
{
   int can = 20;
   float sayim = 4.64;
   double dbsayim = 4.31;
   char karakterim = 'M';

   /*printf("Can degiskeni hafizada %d byte kadar yer tutar\n", sizeof(can));
   printf("Int degiskeni hafizada %d byte kadar yer tutar\n", sizeof(int));
   printf("Char degiskeni hafizada %d byte kadar yer tutar\n", sizeof(char));
   printf("Float degiskeni hafizada %d byte kadar yer tutar\n", sizeof(float));
   printf("Double degiskeni hafizada %d byte kadar yer tutar\n", sizeof(double)); */

   printf("Can degiskeni hafizada %d byte kadar yer tutar\n", sizeof(can));
   printf("Char hafizada %d byte kadar yer tutar\n", sizeof(karakterim));
   printf("Float hafizada %d byte kadar yer tutar\n", sizeof(sayim));
   printf("Double hafizada %d byte kadar yer tutar\n", sizeof(dbsayim));

   return 0;
}
