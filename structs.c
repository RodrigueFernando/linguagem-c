#include<locale.h>
#include<stdio.h>
#include<string.h>

//semana 7
struct Aluno{
	char nome[40];
	char sexo;
	int idade;
}feranndo;//declarando a struct fernando

struct Data{
	int dia,ano;
	char mes[12];
}d;
//na hora de declarar não precisa usar a palavra struct
typedef struct Pessoa{
	char nome[40];
	char sexo;
	int idade;
}PESSOA;//PESSOA p

main(){
	setlocale(LC_ALL,"Portugueses");
	int tam;
	int i;

	//declarando a struct p
	struct Aluno a ={
		"Ana Maria",
		'F',
		27
	};
	printf("Estrutura a:\nNome:%s\nsexo: %c\nIdade:%d\n",a.nome,a.sexo,a.idade);
	
	//declarando a struct data_nasc do tipo Data
	struct Data data_nasc;
	data_nasc.dia = 10;
	data_nasc.ano = 1995;
	strcpy(data_nasc.mes,"Fevereiro");
	printf("\nData de nascimento: %d de %s de %d\n", 
	data_nasc.dia, data_nasc.mes, data_nasc.ano);
	
	//declarando um vetor de estrutura
	struct Aluno vet_p[3] ={
		{"Ano",'F',27},
		{"Jose",'M',13},
		{"Fabia",'M',20}
	};
   for(i=0; i<3;i++){
   	 	printf("\nNome: %s\nSexo:%c\nIdade:%d\n",vet_p[i].nome,vet_p[i].sexo,vet_p[i].idade);
   }
   //terceira struct com typedf
   PESSOA p ={
		"Ana Clara",
		'F',
		30
	};
	printf("Estrutura p:\nNome:%s\nsexo: %c\nIdade:%d\n",p.nome,p.sexo,p.idade);
}
