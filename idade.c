#include<stdio.h>
#include<stdlib.h>

main(){
	/*2.13 - Elabore um algoritmo que, dada a idade de um nadador, classifique classifique-o
em uma das seguintes categorias:
? bebê 0 – 4 anos
? infantil A 5 – 7 anos
? infantil B 8 – 10 anos
? juvenil A 11 – 13 anos
? juvenil B 14 – 17 anos
? sênior maiores de 18 anos*/
 int idade;
 printf("Idade:");
 scanf("%d",&idade);
 if( idade >=0  && idade <=4){
 	printf(" bebe");
 }else{
 	
 	   if( idade >= 5 || idade <=7){
 	 	printf("infantil A");
	  }else{
			 if(idade >=8 || idade <=10 ){
			 	printf("infantil B");
		       }else{
	     			  if(idade >=11 || idade<=13){
			 		   printf("juvenil A");
					   }
					   else{
			           	     if(idade >=14 || idade <=17){
			              	  printf("juvenil B");
						 	 }else{
							 	   printf("seinor maiores");
						        }
					       } 
          	       }
	 	
     	   }
     	  
   }
}
