	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		int idade;
		printf("Informe sua idade, seu mala: ");
		scanf("%d", &idade);
		
		if (idade<=16)
			printf("Junior\n");
		else 
			if (idade<=40)
			printf("Senior\n");
			else
			printf("Veterano\n");
		system ("pause");
		return 0;		
		
		
		
		
		
		
		
		
	}
