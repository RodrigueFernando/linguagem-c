#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));//troca numero
	
	int matriz[3][3];	
	int i,j;
	int soma=0;
	
	putchar('\n');
	// preenche uma matriz 3x3;
	for(i=0 ;i<3; i++){
		for(j=0; j<3;j++){
			matriz[i][j] = rand()%10;
			printf("\t%d",matriz[i][j]);
		}
		putchar('\n');
	}
	
	// localizar a apresentar a posição e o valor da maior e menor valor da matriz
	int maior=0;
	int menor= matriz[0][0];
	int pos_maiorJ,pos_maiorI;
	int pos_menorJ,pos_menorI;
	
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				pos_maiorJ=j;
				pos_maiorI=i;
		   }
		   if(matriz[i][j] < menor){
		   	    menor = matriz[i][j];
		   	    pos_menorJ=j;
		   	    pos_menorI=i;
		   }
		}
	}
	printf("\nMaior numero da matriz: %d .Esta na posição [%d][%d]",maior,pos_maiorI,pos_maiorJ);
	printf("\nMenor numero da matriz: %d .Esta na posição [%d][%d]",menor,pos_menorI,pos_menorJ);
	
	// Calcular e apresentar a coluna com a maior soma e qual é essa soma;
	int soma_coluna= matriz[0][0] + matriz[1][0] + matriz[2][0];
	//int soma_coluna=0;
	//int cont =0;
	int pos_maior_soma=0;
	soma=0;

	putchar('\n');
	for(j=0; j<3; j++){ //inverte o for  para pegar a soma da primeira coluna
		for(i=0; i<3;i++){
		// cont += matriz[i][j];
		 soma += matriz[i][j];
		}
	
	    if(soma > soma_coluna){
	    	soma_coluna = soma;
	    	pos_maior_soma=j;
		}
		//soma_coluna = cont;
		//cont=0;
		printf("\nA soma esta valendo: %d\n",soma);
	    printf("A soma_coluna esta valendo %d,\n",soma_coluna);
	    soma=0;
	    
	}
    printf("\nColuna com maior soma:%d.Com a soma =%d.\n",pos_maior_soma,soma_coluna);
    
	
	//Calcular e apresentar a linha com a menor soma e qual é essa soma
	
	int soma_linha = matriz[0][0] + matriz[0][1] + matriz[0][2];
	int pos_menor_soma=0;
	soma=0;
	
	putchar('\n');
	putchar('\n');
	
	for(i=0; i<3; i++){
	  for(j=0; j<3;j++){
	  	soma += matriz[i][j];
	  }
	 
	  if(soma < soma_linha){
	  	soma_linha = soma;
	  	pos_menor_soma=i;
	  }
	  //printf("\nA soma esta valendo: %d\n",soma);
	 // printf("A soma_linha esta valendo %d,\n",soma_linha);
	  soma=0;
    }
    printf("\nLinha com menor soma:%d.Com a soma =%d.\n",pos_menor_soma,soma_linha);
    
    // Calcular a soma das duas diagonais da matriz;
    for(i=0; i<3; i++){
		for(j=0; j<3;j++){
		   if(i==j){
		   	 	soma += matriz[i][j];
		   }
		}
   } 
    printf("\nSoma da diagonal principal:%d",soma);
    
    soma=0;
    int n1=4; //a soma da diagonal secundaria se faz quando i+j for igual a n+1
    int ij;
    
    for(i=0; i<3;i++){
    	for(j=0;j<3; j++){
    		ij=(i+1) + (j+1);
    		if(ij == n1)
    		 soma +=matriz[i][j];
		}
	}
	printf("\nSoma da diagonal secundaria:%d",soma);

   //Calcular a soma de todos os elementos da matriz.
    
   for(i=0; i<3; i++){
	 for(j=0; j<3;j++){
	  	soma += matriz[i][j];
	  }
   } 
   printf("\nSoma de todos os elementos da matriz:%d",soma);

}
