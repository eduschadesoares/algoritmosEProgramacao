	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int numero;
		printf ("Insira um numero: ");
		scanf("%d", &numero);
		numero%3==0 ? printf("E multiplo de 3.\n") : printf("Nao e multiplo de 3.\n");
		system ("pause");
		return 0;
		
		
	}
