#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int suma=0;
    printf("Podaj liczbe  naturalna, a program obliczy sume liczb naturalnych mniejszych lub rownych tej liczbie!\n");
    scanf("%d", &liczba);

  do
  {
      suma=suma+liczba;
      liczba=liczba-1;
  }
  while(liczba>0);
    printf("suma=%d\n", suma);
    return 0;
}
