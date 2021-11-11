#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;

    printf("La Temperature en F: \n");
    scanf("%f", &C);

    C=(C-32)/1.8;

    printf("La Temperature en C est: %f\n",C);

}
