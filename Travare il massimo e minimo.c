#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 4
int main(){
	int i,vettore[N],minore,maggiore;
	
	
	for(i=0;i<N;i++){
		
		scanf("%d",&vettore[i]);
		
	}
	minore=vettore[0];
	maggiore=vettore[0];
	for(i=0;i<N;i++){
		if(maggiore<vettore[i]){
			
			maggiore=vettore[i];
			
			
		}

	}
	printf("\nIl valore piu' grande e = %d",maggiore);
	
	
	for(i=0;i<N;i++){
		if(minore>vettore[i]){
			minore=vettore[i];
		}
	}
	printf("\nIl valore piu' piccolo e' = %d",minore);
}
