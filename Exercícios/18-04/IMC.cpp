	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
		
	int main() {
		float peso, altura, IMC;
		printf("Insira seu peso: ");
		scanf("%f" , &peso);
		printf("Insira sua altura: ");
		scanf("%f" , &altura);
		
		IMC= peso/pow(altura,2);
			if (IMC<=20)
			printf("Coma mais!\n");
			
			else if (IMC<=25)
			printf("Ta na boa!\n");
			
				 else if (IMC<=30)
				 printf("Meio gordo!\n");
				 
				 	  else if (IMC<=40)
					  printf("Gordo!\n");
					  
					  else 
					  printf("Muito gordo!\n");
					  
					  system("pause");
					  return 0;
					  					  
	}
