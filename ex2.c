#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Escreva um programa que leia uma operação binária entre dois
inteiros (ex.: 5 + 2) e apresente o resultado (ex.: 5 + 2 = 7).*/

main(){
	
	int adicao;
	int num1=0,num2=0;
	int resultado;
	int opcao;
	
	printf(LC_ALL, "Portuguese");
	printf("Digite [1] Adicao  [2] Multiplicacao:");
	scanf("%d",&opcao);
	
	if( opcao == 1){
		printf("informe o primeiro  numero:");
		scanf("%d",&num1);
		
		printf("informe o segundo numero:");
		scanf("%d",&num2);
		
		resultado = num1+ num2;
		printf("O resultado da adição: %d",resultado);
		
	}else
	   if( opcao==2)
   	    printf("informe o  primeiro  numero:");
   	    scanf("%d",&num1);
   	   
   	    printf("informe o segundo numero:");
   	    scanf("%d",&num2);
   	   
   	    resultado = num1 * num2;
   	    printf("O resultado da multiplicacao:%d",resultado);
		   	  
	   
}
