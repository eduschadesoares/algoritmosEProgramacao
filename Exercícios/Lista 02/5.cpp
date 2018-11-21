	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		int N1, N2, soma;
		printf("Insira o primeiro numero: ");
		scanf("%i", &N1);
		printf("Insira o segundo numero: ");
		scanf("%i", &N2);
		soma=N1+N2;
		if (soma<=20)
		printf("Resultado: %i\n", soma-5);
		else 
		printf("Resultado: %i\n", soma+8);

		system("pause");
		return 0;		
		
		
	}
