#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	/*3.1 - Elabore um programa que calcule a soma dos algarismos de um número inteiro
dado.*/
int num;
int i;
int soma=0;
int total=0;
  printf("informe  um numero:");
  scanf("%d",&num);
  
 while (num != 0){
 	printf(" num :%d\n" ,num);
       soma+= num%10;
  	   num = num /10;
  	 
  }
  	printf(" soma :%d " ,soma);
     //printf("soma dos algarismos:%d é %d",num ,total);
}

