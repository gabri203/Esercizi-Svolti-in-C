#include <stdio.h>
 #include <stdlib.h>
#define M 3 //righe 3
#define N 2 //colonne 2
int main(){
	
  int  i, j; 
   float massimo;
  float matrice[M][N];
float minore;


  printf("Inserisce le altezze in cm di ogni persona usando (!! la virgola !! )\n"); 
// dichiariamo le matrice, con i soliti due cicli ,e col scanf 

  for (i = 0; i < M; i++){ 
    for(j= 0; j < N; j++){
    	printf("Inserisci le altezze\n");
      scanf("%f", &matrice[i][j]); 
  }
}
	   minore = matrice[0][0];
   
  for (i = 0; i < M; i++) {
  
  
 for (j = 0; j < N; j++) {
	
	
    
      if (matrice[i][j] < minore) {
	  
	  
        minore = matrice[i][j];


}
  printf("\nL'altezza minore e' %.2f cm\n", minore);   //la matrice saranno i numeri inseriti dal cliente

  


}
}

massimo = matrice[N][M];// invece a massimo gli daro i valori inseriti dal cliente 3x2// inizializziamo le matrici if(i==0)
                          //allora massimo avra
  for (i = 0; i < M; i++) 
  
  
  
   for (j = 0; j < N; j++) 
	
	
	
      if (matrice[i][j] > massimo)
        massimo = matrice[i][j];

  printf("\nL'altezza maggiore e' %.2f cm\n", massimo);
  


  


}
  
