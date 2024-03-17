#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
int main(){
	
	int i;
	char nome[50][50],classe[50][50],sesso[50][50],eta[50][50];
	char cerca[50];
	int cont=0;
	char cerca1[50];
/*	for(i=0;i<N;i++){
		
		printf("Inserisce il nome dell'alunno n %d = ",i+1);
		scanf("%s",nome[i]);
		
	
		
	}*/
	for(i=0;i<N;i++){
		
	
		printf("Inserisce la classe dell'alunno n %d = ",i+1);
		scanf("%s",classe[i]);
	}
	
	for(i=0;i<N;i++){
		
		printf("Inserisce il sesso dell'alunno n %d = ",i+1);
		scanf("%s",sesso[i]);
		
		
	}
	/*
	for(i=0;i<N;i++){
		
		printf("Inserisce l'eta' dell'alunno n %d = ",i+1);
		scanf("%s",eta[i]);
		
	}*/
	printf("Inserisce il sesso da trovare nella classe = ");
	scanf("%s",cerca1);
	printf("Inserisce la classe per trovare quanti dello stesso sesso ci sono = ");
	scanf("%s",cerca);
	
for(i=0;i<N;i++){
	
	if(strcmp(cerca1,sesso[i])==0){
	
	if(strcmp(cerca,classe[i])==0){
	
	cont++;
}
}
}
printf("Le alunne in quella classe sono = %d ",cont);	
	
	
}
