	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	int main () {
		float A, B, C;
		printf("Informe o seu salario: ");
		scanf("%i", &A);
		printf("Informe o valor da prestacao: ");
		scanf("%i", &B);
		C= A-0.3;
		if (C>B)
		printf("O emprestimo nao pode ser concedido.\n");
		else
		printf("O emprestimo pode ser concedido.\n");
		system ("pause");
		return 0;
		
		
		
	}
