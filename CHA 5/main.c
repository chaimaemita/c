#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;

    printf("La température en F: \n");
    scanf("%f", &F);

    C=(F-32)/1.8;

    printf("La Temperature en C est: %f\n",C);
    if (C<0)
        printf("La Temperature est: Tres Froid \n");
    else if (C<30)
        printf("La Temperature est:  Froid \n");
    else if(C=30)
        printf("La Temperature est: chaud \n");
    else if(C>30)
        printf("La Temperature est: Tres chaud \n");

    return 0;
}
