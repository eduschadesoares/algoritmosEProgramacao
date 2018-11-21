	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int numero;
		printf ("Insira um numero: ");
		scanf("%d", &numero);
		numero%2==0 ? printf("Par\n") : printf("Impar\n");
		system ("pause");
		return 0;
		
		
	}
