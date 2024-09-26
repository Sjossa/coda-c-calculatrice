#include <stdlib.h>
#include <stdio.h>

int main(){

	char  symbole;
	int premier;
	int seconde;
	printf("bienvenue dans la calculatrice\n");
	printf("veuillez choisr qu'elle methode de calcule vous allez utuliser :\n");
	printf( "+,-,*,/,%%\n");
	scanf("%s",&symbole);
	printf("choisisez un premier chiffre\n");
	scanf("%d",&premier);
	printf("choisisez un deuxieme chiffre\n");
	scanf("%d",&seconde);

	if( symbole = 43){
	int resultat = premier + seconde;
	printf("le resultat du calcul de %d + %d est egal a %d",premier,seconde,resultat);}

	else if( symbole = 45){
        int resultat = premier - seconde;
        printf("le resultat du calcul de %d - %d est egal a %d",premier,seconde,resultat);}

	else if( symbole = 42){
        int resultat = premier * seconde;

        printf("le resultat du calcul de %d * %d est egal a %d",premier,seconde,resultat);}
}
        
