#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	/*3.4 - Escreva um programa que calcule N!.
Ex.: Se N = 5, então N! = 5 × 4 × 3 × 2 × 1 = 120*/
int fat=1,n;
int i;
  printf("informe n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  	fat = fat * i;
  	printf("%d ",fat);
  }
 
  
}
