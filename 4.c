#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int soma;
	soma = 11-( 6%11);
	printf("soma %d", soma);
}
