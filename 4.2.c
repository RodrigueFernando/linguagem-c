#include<stdio.h>
main(){
	int vet[10] = {1,2,3,4,5,6,7,8,9,10};
	int vetPar[10];
	int vetIm[10];
	int i,cont=0,j=0;
	
	for(i=0; i<10;i++){
	
		if( vet[i] %2==0){
			vetPar[j]= vet[i];
		
			j++;
		//	printf("j%d\n\n",j);
		}else{
		  vetIm[cont] = vet[i];
		  cont++;
	
		}
	    
		
	}
	for(i=0; i<j;i++){
      printf("vetor par %d\n",vetPar[i]);
	
	}
	putchar('\n');
	for(i=0; i<cont;i++){
      printf("vetor impar %d\n",vetIm[i]);
	
	}
	
	
}
