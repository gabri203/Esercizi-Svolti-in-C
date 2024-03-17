#include <stdio.h>
#include <stdlib.h>
#define N 1
/* Esercizio (#1) somma di due o tre numeri */
int main(){
	float num_1;
	float num_2;
char cerca_operazione_aritmetica;//char perchè una stringa che deve avere la funzone di cercare la mia operazione tramite una funzione inserita 
float prodotto;
float somma=0;
float sottrazione;
float divisione;
float percentuale;
float v[N];
int i;
		printf("inserire il primo numero");
	scanf("%f",&num_1);
	
	printf("Inserisce il secondo numero");
	scanf("%f",&num_2);
	
	for(i=0;i<N;i++){
	
   printf("\nInserisce la percentuale da applicare al numero");
   scanf("%f",&v[i]);
}
		printf("\n Sceglie operazione\n");
		scanf("\n%c",&cerca_operazione_aritmetica);
	  
	if(cerca_operazione_aritmetica=='+'){//quado l'utente andrà ha scrivere l'operazione usando il '+' allora il programma eseguira questo per riferimento
			somma = num_1+num_2;	
printf("\n %.2f+%.2f=%.2f",num_1,num_2,somma);

}
else if(cerca_operazione_aritmetica=='*') {
	prodotto = num_1*num_2;
printf("%.2f*%.2f=%.2f",num_1,num_2,prodotto);
}
else if(cerca_operazione_aritmetica=='-'){
	sottrazione=num_1-num_2;
printf("%.2f-%.2f=%.2f",num_1,num_2,sottrazione);
	
	
}
else if(cerca_operazione_aritmetica=='/'){

divisione=num_1/num_2;
printf("%.2f/%.2f=%.2f",num_1,num_2,divisione);

}
for(i=0;i<N;i++){
 if(cerca_operazione_aritmetica=='%'){
	percentuale=(num_1*v[i]/100);
	printf("la percentuale e'%.2f",percentuale);
}
}
}
