#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 9
int main(){
	
	
int i,vettore[N],somma=0;
	for(i=0;i<N;i++){
		
		scanf("%d",&vettore[i]);
		
	}
	for(i=0;i<N;i++){
		
		if(vettore[i]%2==!0){
			somma=somma+vettore[i];
		}
	}
	printf("La somma e'= %d ",somma);
}
