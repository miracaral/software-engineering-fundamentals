#include <stdio.h>
#include <stdlib.h>

typedef struct karmasik_sayi
{
    float reel;
    float sanal;

}karmasik;

void topla(karmasik n1,karmasik n2)
{
    karmasik temp;
    temp.reel=n1.reel+n2.reel;
    temp.sanal=n1.sanal+n2.sanal;
    printf("%.1f+%.1fi\n",n1.reel,n1.sanal);
    printf("%.1f+%.1fi\n",n2.reel,n2.sanal);
    printf("Toplam= %.1f+%.1fi",temp.reel,temp.sanal);
}

int main()
{
    karmasik k1,k2;
    printf("Birinci sayinin reel ve sanal kismini giriniz\n");
    scanf("%f%f",&k1.reel,&k1.sanal); 
    
    printf("Ikinci sayinin reel ve sanal kismini giriniz\n");
    scanf("%f%f",&k2.reel,&k2.sanal);

    topla(k1,k2);

    return 0;
}