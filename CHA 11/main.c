#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float circ,lo,la;

    printf("Donner la longueur: \n");
    scanf("%f",&lo);

    printf("Donner la largeur: \n");
    scanf("%f",&la);

    circ=2*(lo + la);

    printf("La Circonference est: %f\n", circ);

    return 0;
}
