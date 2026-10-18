#include <stdio.h>
#include <stdlib.h>

typedef enum renkler
{
    mavi, // 0 
    kirmizi, // 1
    yesil, // 2
}renk;

int main()
{
    renk can=yesil;
    printf("%d\n",can);
    return 0;
}

/* enum renkler
{
    mavi, // 0 
    kirmizi, // 1
    yesil, // 2
};

int main()
{
    enum renkler can=yesil;
    printf("%d\n",can);
    return 0;
} */