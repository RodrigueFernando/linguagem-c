#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*2.3 - Escreva um programa que leia três valores inteiros, determine e imprima
o maior deles.*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int num1,num2,num3;
	
	printf("informe três numero inteiros:\n");
	scanf("%d %d %d",&num1, &num2, &num3);
	
	if((num1 > num2) && (num1 > num3))
	   printf("O numero maior:%d",num1);
	   
	if(num2> num1 && num2 > num3)
		printf("O maior numero:%d",num2);
	else
	 printf("O maior numero:%d",num3);
}
