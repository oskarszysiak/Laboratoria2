#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lab2Task3\n");

    int nra=80614;
    int endv=nra+16;
    int i;
printf("a.\n");
    for(i=nra; i<endv; i++)
    {
        printf("%d\n", i);
    }

printf("b.\n");
    int p=0;
    int k=15;
    int numer=nra;
    while(p<k)
    {
        numer--;
        if(numer%2==0)
        {
            printf("%d\n", numer);
            p++;
        }
    }

    printf("c.\n");

    int a=0;
    int b=15;
    int nrb=nra;

    do
    {
         nrb++;
        if(nrb%3==0||nrb%5==0)
        {
            printf("%d\n", nrb);
            a++;
        }
        nrb++;


    }while(a<b);


    return 0;
}
