#include<stdio.h>
#include<math.h>
#include<math.h>

 int a,b,c,nmbr;
 int main()
 {
 	printf("entrez un nombre de trois chiffres");
 	scanf("%d",&nmbr);
 	
 	a=nmbr/100;
 	nmbr=nmbr-a*100;
 	b=nmbr/10;
 	nmbr=nmbr-b*10;
 	c=nmbr;
 	
 	printf("le nombre est %d%d%d",c,b,a);
 	
 	
 }
 
