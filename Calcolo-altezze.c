#include <stdio.h>
#include <stdlib.h>
#define righe 3
#define colonne 2
/* supponi di avere in memoria una matrice rettangolare MxN di numeri interi indicanti l'altezza di alcune persone,
qual' è la persona piu' alta:piu' bassa tra le piu' alte di ogni riga,
 oppure la piu' alta tra le piu' basse si ogni collonna? */
 
 //questo programma mi deve ritornare le persone piu' alte e quelle piu' basse
 
int main(){
int j,k,massimo;
 	int altezze[righe][colonne];
 	
 		for( j=0;j<righe;j++) {                      //inserisco i voti nella matrice
		 for( k=0;k<colonne;k++){
			printf("\n Inserisce le altezze \n");
	       scanf("%d",&altezze[j][k]);

}
}
massimo = altezze[0][0];

  for (j=0; j<righe; j++)
    for (k=0; k<colonne; k++)
      if (altezze[j][k] > massimo)
        massimo = altezze[j][k];

  printf("L'altezza piu' grande e' %d\n", massimo);

  return massimo;
}
 
 
