#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	int z;
	int y;
	
	/*2.12 - Escrever um programa que receba tr�s valores X, Y e Z. Ent�o verifique
se eles podem ser comprimentos dos lados de um tri�ngulo e, se forem, verifique
se � um tri�ngulo equil�tero, is�sceles ou escaleno. Se n�o formarem um tri�ngulo,
escreva uma mensagem informando que n�o � tri�ngulo. Considere as propriedades:
? O comprimento de cada lado do tri�ngulo � menor do que a soma dos outros
dois lados.
? Equil�tero: � o tri�ngulo cujos lados t�m todos o mesmo comprimento.
? Is�sceles: � o tri�ngulo que tem dois lados do mesmo comprimento.
? Escaleno: � o tri�ngulo cujos tr�s lados t�m todos comprimentos diferentes
entre si.*/
	printf("informe numero x:");
	scanf("%d",&x);
	
	printf("informe numero z:");
	scanf("%d",&z);
	
	printf("informe numero y:");
	scanf("%d",&y);
	
	if(( x > z + y) || (z > x+y) || (y > x + z)){
		printf("N�o forma Tringulo");	
		
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
