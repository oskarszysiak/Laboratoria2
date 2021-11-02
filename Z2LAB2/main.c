#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lab2Task2!\n");

    unsigned int a=20;
    unsigned int b=2;
    printf("%u\n", a+b);
    printf("%u\n", a-b);
    printf("%u\n", a*b);
    printf("%u\n", a/b);

    unsigned int c=-20;
    unsigned int d=2;
    printf("%u\n", c+d);
    printf("%u\n", c-d);
    printf("%u\n", c*d);
    printf("%u\n", c/d);

    //zmienna unsigned int nie przechowuje informacji o znaku zmiennej dlatego dla liczb dodatnich wyniki sa normalne a dla liczb ujemnych wyniki nie sa takie jakich oznaby sie spodziewac

    long int e=20;
    long int f=-5;
    printf("%ld\n", e+f);
    printf("%ld\n", e-f);
    printf("%ld\n", e*f);
    printf("%ld\n", e/f);
    //w tym przypadku wyniki sa takie jakich mozna sie spodziewac bo long int przejmuje zmienne wraz z ich znakami

    float g=-2;
    float h=12;
    printf("%f\n", g+h);
    printf("%f\n", g-h);
    printf("%f\n", g*h);
    printf("%f\n", g/h);
    // w tym przypadku wyniki sa rowniez takie jakich mozna sie spodziewac poniewaz typ float przejmuje liczby ze znakiem i z czesciami po przecinku

    char i=12;
    char j=15;
    printf("%c\n", i+j);

    //dla typu char wyniki nie sa takie jakich mozna sie spodziewac, poniewaz typ char liczbie przypisuje dany znak np a ma przypisan¹ liczbe 97

    char k=97;
    printf("%c\n", k);








    return 0;
}
