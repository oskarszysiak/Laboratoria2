#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e;
    float srednia;
    printf("Podaj liczbe 1:\n");
    scanf("%f", &a);

    printf("Podaj liczbe 2:\n");
    scanf("%f", &b);

    printf("Podaj liczbe 3:\n");
    scanf("%f", &c);

    printf("Podaj liczbe 4:\n");
    scanf("%f", &d);

    printf("Podaj liczbe 5:\n");
    scanf("%f", &e);

    srednia=(a+b+c+d+e)/5;
    printf("Srednia arytmetyczna tych liczb to:%f\n", srednia);

    int ilosc=0;
    if(a==1)
    {
        ilosc++;
    }

    if(b==1)
    {
        ilosc++;
    }

    if(c==1)
    {
        ilosc++;
    }

    if(d==1)
    {
        ilosc++;
    }

    if(e==1)
    {
        ilosc++;
    }

    printf("Ilosc ocen niedostatecznych: %d\n", ilosc);
    return 0;
}
