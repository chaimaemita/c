#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Mile;
    int Km;

    printf("Donner le Km :\n");
    scanf("%f",&Km);

    Mile = Km*1.609;

    printf("Le Mile est: %f\n", Mile);
    return 0;
}
