#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Podaj liczbe, a program obliczy wartosc sufit i podloga!\n");
    scanf("%f", &x);
    int y=x;

    //podloga
    if(x>=0)
    {
        printf("Podloga liczby %f to %d\n",x, y);
    }
    else
    {
        if(x==y)
        {
            printf("Podloga liczby %f to %d\n",x,y);
        }
        else
        {
            int podlogadlaniecalkowitychujemnych=y-1;
            printf("Podloga liczby %f to %d\n",x,podlogadlaniecalkowitychujemnych);

        }
    }
    //sufit
    if(x<=0)
    {
        printf("Sufit liczby %f to %d\n",x,y);
    }
    else
    {
        if(x==y)
        {
            printf("Sufit liczby %f to %d\n",x,y);
        }
        else
        {
            int sufitdlacalkowitychdodatnich=y+1;
             printf("Sufit liczby %f to %d\n0.5",x,sufitdlacalkowitychdodatnich);
        }
    }





}
