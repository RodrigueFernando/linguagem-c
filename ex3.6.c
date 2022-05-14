#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 main(){
 /*3.6 - Escreva um programa que leia um conjunto de dados contendo altura e sexo
(masculino e feminino) de 5 pessoas e depois calcule e escreva:
? a maior e a menor altura do grupo
? a média de alturas das mulheres
? número de homens e a diferença percentual entre esses e as mulheres*/
int i,num=3,F=0,M=0;//variavel de contador F conta a qtd de mulher  M conta qtd de hoemns num controla o for
int sexo=0,cont=1,total=0;
float alt_M,alt_F; //variavel  apra guarda o altura
float  maiorF=0,menorF=0; //variavel para guardar a menor e maior altura feminina
float maiorM=0,menorM=0;// variavel para guardar a menor e mair altura masculina
float alturaF,media=0;
float diferenca=0;
  
 for(i=0; i<=num; i++){
	    printf(" [1] Masculino\n [2] Feminino\n");
	    scanf("%d",&sexo);
	
	 	 
	    if( sexo==1){
	     	printf(" \ninforme sua altura:");
	     	scanf("%f",&alt_M);
	 	    M++;
	   }
	   if(sexo == 2){
	   		printf("\ninforme sua altura:");
		 	scanf("%f",&alt_F);
		 	
		 	total = total + alt_F; //  guarda o total de altura feminina
		    F++;
	
		}
		 	
	   
	      printf("valor do total %d\n",total );
	
		
		if(i == 0){
		 	
		    maiorF = alt_F;
		    menorF = alt_F;
		 	maiorM = alt_M;
		 	menorM = alt_M;
		 
	   }
	  
	    if(maiorM < alt_M ){
		   maiorM = alt_M;
		   printf("entro no maior  masculino\n");
		 	
		}else{
			menorM = alt_M;
		    printf("entro no menor masculino\n");
        }
        if(maiorF < alt_F ){
		   maiorF = alt_F;
		  printf("entro no maior mulher\n");
		 	
		}else{
			menorM = alt_M;
		   printf("entro no menor mulher\n");
        }

			  	 
   }

media = total/F;
diferenca = M + F/num;	
// não print
printf("falor do f %d, valor do m %f, valor do total %f",M,F,total);
printf("\na maior %0.1f e a menor  %0.1f altura do grupo :",maiorM,menorM);
printf("\na media de alturas das mulheres %0.1f:",media);
printf("\nnumero de homens e a diferenca percentual entre esses e as mulheres %f",diferenca);
	 
 	
 }
