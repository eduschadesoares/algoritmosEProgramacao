	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		float N;
		printf ("Insira um numero: ");
		scanf("%f", &N);
			if (N<0)
			printf("Numero negativo.\n");
			else 
				if (N==0)
				printf("Numero nulo.\n");
				else 
				printf("Numero positivo.\n");
	system("pause");
	return 0;
		
		
	}
