#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	int z;
	int y;
	
	/*2.12 - Escrever um programa que receba três valores X, Y e Z. Então verifique
se eles podem ser comprimentos dos lados de um triângulo e, se forem, verifique
se é um triângulo equilátero, isósceles ou escaleno. Se não formarem um triângulo,
escreva uma mensagem informando que não é triângulo. Considere as propriedades:
? O comprimento de cada lado do triângulo é menor do que a soma dos outros
dois lados.
? Equilátero: é o triângulo cujos lados têm todos o mesmo comprimento.
? Isósceles: é o triângulo que tem dois lados do mesmo comprimento.
? Escaleno: é o triângulo cujos três lados têm todos comprimentos diferentes
entre si.*/
	printf("informe numero x:");
	scanf("%d",&x);
	
	printf("informe numero z:");
	scanf("%d",&z);
	
	printf("informe numero y:");
	scanf("%d",&y);
	
	if(( x > z + y) || (z > x+y) || (y > x + z)){
		printf("Não forma Tringulo");	
		
	}else{
		if( x == y && x == z){
			printf("triangulo Equilatero");
			}else
				if( x == y || x == z || y ==z){
					printf("Triangulo Isosceles");
				}
			else
				printf("Triangulo Escaleno");
			
	}
}
