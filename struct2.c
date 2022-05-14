#include<locale.h>
#include<stdio.h>
#include<string.h>

typedef struct Data{
	int dia,ano;
	char mes[12];
} Data;
typedef struct Pessoa{
    char nome[40];
	char sexo;
	int idade;
	Data  dt_nasc;
} PESSOA;

main(){
	setlocale(LC_ALL, "Portuguese");
	PESSOA p;
	printf("Digite o nome da pessoa:");
	gets(p.nome);
	fflush(stdin);
	printf("Digite o sexo:");
	scanf("%c",&p.sexo);
	
	printf("Didite a idade:");
	scanf("%d",&p.idade);
	
	printf("Digite a data de nascimento,dia:");
	scanf("%d",&p.dt_nasc.dia);
	fflush(stdin);
	printf("mês:");
	gets(p.dt_nasc.mes);
	printf("Ano:");
	scanf("%d",&p.dt_nasc.ano);
	
	printf("\n\n-------------------------");
	printf("\nNome da pessoa:%s",p.nome); 
	printf("\nSexo da pessoa:%c",p.sexo); 
	printf("\nIdade da pessoa:%d",p.sexo); 
    printf("\n\nData de nascimento:");
	printf("\n%d de %s de %d",p.dt_nasc.dia,p.dt_nasc.mes,p.dt_nasc.ano);
	printf("\n\n-------------------------");
}
