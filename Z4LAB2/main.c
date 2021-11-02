#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lab2Task4!\n");
    printf("a.\n");
    float a=5.2123;
    int b=(int)a;
    printf("%d\n", b);

    printf("b.\n");
    int c=8;
    float d=(float)c;
    printf("%f\n", d);

    printf("c.\n");
    int e=5;
    int f=8;

    int wynik1=e/f;
    printf("%d\n", wynik1);

    printf("d.\n");
    float wynik2=(float) e/(float) f;
    printf("%f\n", wynik2);

    printf("e.\n");
    int g=3;
    float h=2.11;
    float wynik3=g/h;
    printf("%f\n", wynik3);

    printf("e.\n");
    int i=23;
    int j=21;
    float wynik4=(float)i/(float)j;
    printf("%f\n",wynik4);




    return 0;
}
