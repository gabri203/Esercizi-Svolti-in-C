#include <stdio.h>
#include <stdlib.h>
/* calcolare i lati di un triangolo, e verificare se sono isoscele,equilatero o scaleno */



int main (){
	int a , b , c; //dichiarare le variabili a,b,c
	
	printf("inserisci il primo lato"); // i printf dopo aver dichiarato le variabili
	scanf("%d",&a);//stampa la variabile (a)
	printf("\n");// mi aiuta a passare da un printf e scanf ad un'altra variabile non ancora stampata
	printf("inserisci il secondo lato");
	scanf("%d",&b);// mi serve a cercare in momoria b
	printf("\n");
	printf("inserisci il terzo lato");
	scanf("%d",&c);



	if(a*a+b*b==c*c){
	printf("Hai trovato la terna pitagorica");
	}
	else   
			{
			printf("Non hai trovato la terna pitagorica");
		
	}
	
	return 0;
}
