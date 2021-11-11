#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2;
    float MN;
    printf("Donner Les Cordonnees: x1, y1, x2 ET y2: \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);


    MN = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

    printf("La Distance MN est: %f\n", MN);

    return 0;

}
