#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, wynik;
    printf("Podaj x:\n");
    scanf("%f", &x);
    printf("Podaj y:\n");
    scanf("%f", &y);

    if(y!=0)
    {
        wynik=x/y;
        printf("wynik z dzielenia x na y=%f\n", wynik);
    }
    else
    {
    printf("Nie mozna dzielic przez 0!");
    }
    return 0;
}
