	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int numero;
		printf ("Insira um numero: ");
		scanf("%d", &numero);
		numero%10==0 || numero%5==0 || numero%2==0 ? printf("E divisivel por 10, 5 e 2.\n") : printf("Nao e divisivel por 10, 5, 3.\n");
		system ("pause");
		return 0;
		
		
	}
