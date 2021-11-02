#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj ilu liczb srednia chcialbys policzyc:\n");
    scanf("%d", &n);
    float liczby[n];
    int i=0;
    float suma=0;
    int a=1;


    for(i=0;i<n;i++)
    {
        printf ("Podaj liczbe nr %d:",a);
        a++;
        scanf ("%f",&liczby[i]);
        suma=suma+liczby[i];
    }
    float srednia;
    srednia=suma/n;
    printf("Srednia tych liczb to:%f\n",srednia);



    return 0;
}
