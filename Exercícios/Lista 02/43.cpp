	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		float peso;
		int P;
		printf("Informe o seu peso: ");
		scanf("%f", &peso);
		printf(" 1 - Mercurio\n 2 - Venus\n 3 - Marte\n 4 - Jupiter\n 5 - Saturno\n 6 - Urano\n");
		printf("Informe o planeta escolhido: ");
		scanf("%i", &P);
		switch (P){
			case 1:printf("Seu peso no planeta escolhido: %.1f\n", peso*0.37); break;
			case 2:printf("Seu peso no planeta escolhido: %.1f\n", peso*0.88); break;
			case 3:printf("Seu peso no planeta escolhido: %.1f\n", peso*0.38); break;
			case 4:printf("Seu peso no planeta escolhido: %.1f\n", peso*2.64); break;
			case 5:printf("Seu peso no planeta escolhido: %.1f\n", peso*1.15); break;
			case 6:printf("Seu peso no planeta escolhido: %.1f\n", peso*1.17); break;
			default: printf("Voce e retardado. Deve-se escolher um numero entre 1 e 6.\n");
		}
			system("pause");
			return 0;
						
		}
