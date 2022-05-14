#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	/*3.5 - Elabore um algoritmo que calcule a média de uma série de números inteiros
e positivos. O número de elementos da série será definida pelo usuário.
*/
int nota,serie;
int i;
float media,total;
 printf("informe a serie:");
 scanf("%d",&serie);
 for(i=1; i<=serie;i++){
 	printf("\ninforme a sua nota:");
    scanf("%d",&nota);
 	total= total + nota;
 	
 	media = total/serie;
 	
 	//printf("\n%0.2f",media);
 }
  printf("\n %0.1f",media);

}
