#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[5];
	int vet2[5];
	int novo_vet[10];
	int i,cont=0;
    printf("vetor 1\n");
	for(i=0;i<5;i++){
		printf(" \nposição vetor [%d]:",i);
		scanf("%d",&vet1[i]);
	
	}
	putchar('\n');
	printf("\nvetor 2");
	for(i=0;i<5;i++){
		printf("\nposição vetor [%d]:",i);
		scanf("%d",&vet2[i]);
	
	}
	putchar('\n');

	for(i=0;i<5;i++)
       novo_vet[i] = vet1[i];
    for(i=5; i<10;i++){
    	novo_vet[i]= vet2[cont];
    	cont++;
    	printf("cont %d",cont);
	}
	for(i=0; i<5;i++){
		printf("veto 2 %d",vet2[i]);
		putchar('\n');
	}

	
	putchar('\n');
	printf("\n Novo vetor \n");
	for(i=0;i<10;i++){
    	printf(" posição vetor:%d",novo_vet[i]);
	    putchar('\n');
	}
}
