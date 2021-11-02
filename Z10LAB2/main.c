#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    printf("Podaj liczbe 1:\n");
    scanf("%f", &a);

    printf("Podaj liczbe 2:\n");
    scanf("%f", &b);

    printf("Podaj liczbe 3:\n");
    scanf("%f", &c);

    if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
