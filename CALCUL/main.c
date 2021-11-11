#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float add, sub, mult, divq, divr;

    printf("Saisir a et b :\n ");
    scanf("%d %d",&a ,&b);

    printf("les valeurs de a et b sont: %d ET %d\n", a,b);


    add = a+b;
    sub = a-b;
    mult = a*b;
    divq = a/b;
    divr = a%b;

    printf("Le Somme est: %f\n, La Substraction est: %f\n, La Multipliction est: %f\n, Le Quotient de la Division est: %f\n, le Rest de la Division: %f\n",add,sub,mult,divq,divr);

    return 0;

}
