#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor;
    float kmkw=0.74;
    float km1;
    float kwkm=1.36;
    float kw1;
    float wynik;
    printf("Konwerter KM na kW i Kw na KM\n");
    printf("Jesli chcesz przeliczyc KM na kW wpisz \"1\", jesli chcesz przeliczyc kW na KM wpisz \"2\"!\n");
    scanf("%d", &wybor);
    switch(wybor)
    {
      case 1:
        printf("Podaj wartosc w KM, ktora chcesz zamienic na kW:\n");
        scanf ("%f", &km1);
        wynik=km1*kmkw;
        printf("Zamieniajac %f KM na kW otrzymamy %f kW",km1, wynik);
        break;

      case 2:
        printf("Podaj wartosc w kW, ktora chcesz zamienic na KM:\n");
        scanf ("%f", &kw1);
        wynik=kw1*kwkm;
        printf("Zamieniajac %f kW na KM otrzymamy %f KM", kw1, wynik);
        break;

      default:
        printf("Nie ma takiej mozliwosci!");
        break;

    }
    return 0;
}
