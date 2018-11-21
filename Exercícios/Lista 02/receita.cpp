	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		int idade, gotas;
		float peso;
		printf("Insira a a sua idade:");
		scanf("%d" , &idade);
		printf("Insira o seu peso: ");
		scanf("%f" , &peso);
		if(idade >= 12);
			else if (peso >= 60)			
			gotas = (1000.0/500)*20;
				else if (peso <60)
				gotas = (875.0/500)*20;
		else if (peso >=30)
			gotas = (750.0/500)*20;
			else if (peso >= 24.1)
			gotas = (500/500.0)*20;
				else if (peso >=16.1)
				gotas = (375/500.0)*20;
					else if (peso >= 9)
					gotas = (250/500.0)*20;
						else if (peso >= 5)
						gotas = (125/500.0)*20;
							else 
							gotas = 0;
		printf("Dosagem: %d gotas.\n" , gotas);
		system ("pause");
		return 0;	
		
	}
