#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20],prenom[20],sexe[20];
    int age,num;

    printf("votre nom est:\n");
    scanf("%s",&nom);

    printf("votre prenom est:\n");
    scanf("%s",&prenom);

    printf("votre age est:\n");
    scanf("%d",&age);

    printf("votre sex est:\n");
    scanf("%s",&sexe);

    printf("votre numero de telephone est:\n");
    scanf("%d",&num);

    printf(" le nom complet:%s %s,\n age:%d,\n sexe:%s,\n le numero de telephone:%d\n",nom,prenom,age,sexe,num);
    return 0;
}
