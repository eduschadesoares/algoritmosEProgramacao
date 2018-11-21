	#include <stdio.h>
	#include <stdlib.h>
	
	int main() {
		float altura, peso_ideal;
		char sexo;
		printf("Informe altura: ");
		scanf("%f", &altura, &sexo);
		fflush(stdin);		
		printf("Informe o secssu (M/F): ");
		scanf("%c", &altura, &sexo);
		
		if (sexo=='M' || sexo=='m') {
			peso_ideal=(72.7*altura)-58;
			printf("Peso ideal do SR.=%.1f\n", peso_ideal);
			
		}
		else if (sexo=='F' || sexo=='f') {
			peso_ideal=(62.1*altura)-44.7;
			printf("Peso ideal do Sra.=%.1f\n", peso_ideal);
		}
		else printf("Secssu incorreto\n");
		
		system("pause");
		return 0;
		
		
		
		
	}
