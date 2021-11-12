#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{

    float T;
    int C;

    printf("La temperature en C : \n");
    scanf("%f", &T);

    T=(C*1.8)+32;

    printf("La temperature en F : %f\n", T);
}

