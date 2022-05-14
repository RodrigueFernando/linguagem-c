#include<stdio.h>

main(){
  float total;
  float salario;
  
  printf("informe o  salario:");
  scanf("%f",&salario);
  
  if (salario > 1000){
  	 
  	total = salario * 1.05;
  	  printf("Novo salario: %f",total);
  }else{
	  	total = salario + ( salario * 0.07);
	  	
	    printf("Novo salario: %f",total);
	    
  }
  	
     
  
}
