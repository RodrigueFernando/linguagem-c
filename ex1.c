#include<stdio.h>
#include<stdlib.h>
/* ? Escreva um programa que dado o sexo e a altura calcule o peso ideal,
sabendo que: o peso ideal de um homem é: (72, 7 × altura) - 58, e
de uma mulher é: (62, 1 × altura) - 44, 7.*/
main(){
	
int cont;
float altura;
float peso;

printf(" Digite:  [1] masculino   [2] feminino: \n");
scanf("%d",&cont);


  switch(cont){
    case 1:
	 	printf(" infome a altura:");
	    scanf("%f",&altura);
	    
	    peso = (72.7 * altura) - 58;
	    printf(" peso ideia   do homem:%f",peso);
 	 	
 	 	break;
 	 	
   case 2:
 		printf(" informe a altura:");
 		scanf("%f",&altura);
 		
 		peso = (62.1 * altura) - 44.7;
 		printf("'peso ideia da mulher:%f",peso);
 	    break;
 	    
 
   }  
}


