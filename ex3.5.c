#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	/*3.5 - Elabore um algoritmo que calcule a m�dia de uma s�rie de n�meros inteiros
e positivos. O n�mero de elementos da s�rie ser� definida pelo usu�rio.
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
