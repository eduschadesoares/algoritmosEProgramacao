	#include <stdio.h>
	#include <stdlib.h>
	
	int main() {
		float altura, peso_ideal, nome;
		char sexo;
		
		printf("Informe o seu nome: ");
		scanf("%f", nome);
		
		printf("Informe altura");
		scanf("%f", &altura);
		
		printf("Informe o secssu (M/F): ");
		scanf("%c", &sexo);
		
		if (sexo=='M' || sexo=='m') {
			peso_ideal=(72.7*altura)-58;
			printf("Peso ideal do Sr. %f =%.1f\n", nome, peso_ideal);
			
		}
		else if (sexo=='F' || sexo=='f') {
			peso_ideal=(62.1*altura)-44.7;
			printf("Peso ideal do Sra.=%.1f\n", peso_ideal);
		}
		else printf("Secssu incorreto\n");
		
		system("pause");
		return 0;
		
		
		
		
	}
