	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int numero;
		printf ("Insira um numero: ");
		scanf("%d", &numero);	
		numero%5==0 ? printf("Numero e divisivel por 5.\n") : printf("Numero nao e divisivel por 5.\n");
		system ("pause");
		return 0;
		
		
	}
