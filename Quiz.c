#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
//quiz di inglese
int main(){
	
int r2;
char r1[N],r3[N],r4[N],r5[N];


printf("\n come si dice libro in inglese ? = ");
scanf("%s",r1);

strcpy(r3,"book");//si prende solo r3 che dove sarà assegnato la parola "book"
strcpy(r4,"red");
if(strcmp(r3,r1)==0){

printf("\n hai risposto correttamente");
	
}else{
	
	printf("\n non e' vero in inglese libro si dice = %s",r3);
	
}

	printf("\n come si dice rosso in inglese ? = ");
	scanf("%s",r5);
	
	
 if(strcmp(r4,r5)==0){
 	
	printf("\n hai risposto correttamente");
	
}else{
		printf("\n non e' vero in inglese red si dice = %s",r4);
}

return 0;
}
