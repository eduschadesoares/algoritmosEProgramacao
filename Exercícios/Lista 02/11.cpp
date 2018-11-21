	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int numero;
		printf ("Insira um numero: ");
		scanf("%d", &numero);
		numero%3==0 || numero%7==0 ? printf("E divisivel por 3 e 7.\n") : printf("Nao e divisivel por 3 e 7.\n");
		system ("pause");
		return 0;
		
		
	}
