#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");

int op;	
//variaveis  de contador
int otimo=0;//conta voto otimo
int bom=0;//conta voto bom
int ruim=0;//conta voto ruim
int regular=0;//conta voto
int cont=0;//conta o total de pessoas que votaram
int cont_ruim=0;//maior idade ruim
int cont_otima=0;//maior idade otima

//variaveis registra idades
int idade_otima=0;
int idade_bom=0;
int idade_ruim=0;
int pessimo=0;

int nota_otima;

float media_idade;
float percentual=0;
int diferencia_idade;
float media_ruim=0;
do{
 	printf(" QUESTIONARIO:\n");
 	printf("Digite 1 para Otimo\n");
 	printf("Digite 2 para Bom\n");
 	printf("Digite 3 para Regular\n");
 	printf("Digite 4 para Ruim\n");
 	printf("Digite 5 para Pessimo\n");
 	printf("DIgite 6 para Sair:\n");
 	scanf("%d",&op);
 	fflush ( stdin );


 	switch(op){

 		case 1:
 			printf("\ninforme sua idade:");
 			scanf("%d",&idade_otima);
 			otimo++;
 			fflush ( stdin );
 			
 			if(cont_otima < idade_otima){
 				cont_otima = idade_otima;
			 }
			fflush ( stdin );
 		break;
 		
 		case 2:
 			printf("informe sua idade:");
 			scanf("%d",&idade_bom);
 			bom++;
 		break;
 		
 		case 3:
 			printf("okay: \n");
		    regular++;
		break;
		
		case 4:
		  printf(" informe sua idade:");
		  scanf("%d",&idade_ruim);
		   ruim++;
		   
		   if(cont_ruim < idade_ruim){
		   	 cont_ruim = idade_ruim;
		   }
		break;
		case 5:
			 pessimo++;
		break;
		  
		default:printf("Opção invalida!\n");
	
   }
     cont++;
}while(op != 6);
cont=cont-1;

media_ruim = ruim/cont;

percentual=(bom - regular)/cont;

diferencia_idade = (cont_otima - cont_ruim);


printf("\nA quantidade de resposta otima %d:\n",otimo);
printf("A diferença percentual entre respostas bom e regula %f:\n",percentual);
printf("\nmaior idade otimo %d  maior IDADE ruim %d:\n",cont_otima,cont_ruim);
printf("A média de idade das pessoas que responderam  ruim  %0.2f:  \n" ,media_ruim);
printf("A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d",diferencia_idade);

printf("\ncont %d\n",cont);
printf("bom %d\n",bom);
printf("regular %d",regular);
printf("\nruim %d",ruim);
int resultado = (bom -regular)
printf("\npercentual %f ",resultado);
}
