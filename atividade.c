#include<locale.h>
#include<stdio.h>
#include<string.h>

typedef struct Disciplina{
	char nome_disc[40];
    float nota1;
    float nota2;
    float freq;
    float media;
}DISC;

struct Aluno{
	char nome[40];
	DISC d[4];
}a;

main(){
	setlocale(LC_ALL,"Portuguese");
	int op,index=0,i=0;
	printf("Digite o nome do aluno:");
	gets(a.nome);
	
	do{
		printf("\n----Menu-----");
		printf("\n1.Incluir disciplina");
		printf("\n2.Apresenta boletin");
		printf("\n3.Apresenta media a situação do aluno\n");
		printf("0.Sair");
		printf("\n-----------------------\n");
		printf("Digite uma opção:");
		scanf("%d",&op);
	    fflush(stdin);
		switch(op){
			case 1:
				printf("Nome da disciplina:");
				gets(a.d[index].nome_disc);
				
				printf("Digite nota1:");
				scanf("%f",&a.d[index].nota1);
	
				printf("Digite nota2:");
				scanf("%f",&a.d[index].nota2);
			
				printf("Digite a frenquencia:");
				scanf("%f",&a.d[index].freq);
			    printf("---------------------------");
		 
			  
				index++;
			break;
		
            
            case 2:
            	for(i=0; i<index; i++){
            		printf("Nome da disciplina: %c\n",a.d[i].nome_disc);
            		printf("nota 1: %2f",a.d[i].nota1);
            		printf("\nnota 2 : %2f",a.d[i].nota2);
            		printf("\nfrequencia do aluno: %2f%%\n\n\n",a.d[i].freq);
            		
				}
				system("pause");
			break;
			
			case 3:
				printf("\nSITUAÇÂO DO ALUNO");
			
			
				for(i=0; i<index; i++){
				   a.d[i].media = a.d[index].nota1 + a.d[i].nota2 / 2;
				    if((a.d[i].freq >75) && (a.d[i].media > 6)){
				    
						printf("\nAprovado: %2f\n",a.d[i].media);
					}
					else{
						if(a.d[i].freq < 75 && a.d[i].media >=6)
						 printf("\nreprovado por ferequencia:%2f%%\n",a.d[i].freq);
				
						if(a.d[i].freq >= 75 && a.d[i].media <6)
						printf("\nreprovado por  nota:%f\n",a.d[i].media);
					}
				}
				system("pause");
			break;
			default:printf("opçao invalida");	
		}
		system("cls");
		
	}while(op > 0);
	
	printf("Aluno: %s\n\n",a.nome);
}
