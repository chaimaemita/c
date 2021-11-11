#include <stdlib.h>
#include <math.h>

int main()
{
    float circ, r;
    const pi= 3.14;

    printf("Donner La valeur du rayon: \n ");
    scanf("%f", &r);

    circ= 2*pi*r;

    printf("La Circonférence du Cercle est : %f\n",circ);


    return 0;
}
