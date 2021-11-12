#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   float som,moy;

   printf("Donner a et b et c et d:\n ");
   scanf("%d %d %d %d",&a,&b,&c,&d);

   printf("Les Valeurs sont: %d , %d , %d et %d \n", a,b,c,d);

   som = a+b+c+d;
   moy= som/4;

   printf("La Somme est: %f\n, la moyenne est: %f\n", som,moy);

   return 0;
}
