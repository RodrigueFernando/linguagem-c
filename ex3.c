#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	/*3 - Calcule e imprima o valor de S dado por:
*/
setlocale(LC_ALL, "Portuguese");
float s=0;
int i;
float cont=1;
	
	for(i=1;i<=50;i++){
		s +=  (float)(2*i-1)/i;

       printf( " %0.0f/%d",cont,i);
       cont+=2;
	}
   printf("\n soma %0.1f",s);
}
