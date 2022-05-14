#include<stdio.h>

main(){
	float vet_mes[5];
	int i,n=5;
    float maior=0,menor=0;
	float total=0,cont=0;
	float media=0;
	
	for(i=0; i<n;i++){
		printf("salario do mes %d:",(i+1));
		scanf("%f",&vet_mes[i]);
	}
	putchar('\n');
	for(i=0; i<n;i++){
		if( i==0){
			maior = vet_mes[i];
			menor = vet_mes[i];
		}
		printf("valores mensais%d: %0.2f\n",(i+1),vet_mes[i]);
	    total+= vet_mes[i];
	    
	    if( maior < vet_mes[i]){
	    	maior =  vet_mes[i];
		}
	    if(menor > vet_mes[i]){
	    	menor = vet_mes[i]; //vet_mes[i];
		}
	}
	media= total/n;
	printf("\n\ntotal anual %f:",total);
	printf("\nO mes que o salario foi o mais alto %0.0f:",maior);
	printf("\nO mes que o salario foi o mais baixo %0.0f",menor);
	printf("\n A media dos salario %f",media);
}
