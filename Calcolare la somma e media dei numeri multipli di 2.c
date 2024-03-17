#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8
int main(){
	
	int i,vettore[N],cont=0;
	int somma=0;
	float media=0;
	for(i=0;i<N;i++){
		
		scanf("%d",&vettore[i]);
	}
	
	for(i=0;i<N;i++){
		
		if(vettore[i]%2==0){
			cont++;
		}
	}
	printf("I numeri multipli di di 2 sono = %d",cont);
	for(i=0;i<N;i++){
	if(vettore[i]%2==0){
	
	somma=somma+vettore[i];
	media=(float)somma/N;
}
}

	printf("\nLa somma dei numeri multipli di 2 e' = %d ",somma);
	printf("\nLa media dei numeri multipli di 2 e' = %.2f ",media);
	
}
