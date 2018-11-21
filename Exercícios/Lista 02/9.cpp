	#include <stdio.h>
	#include <stdlib.h>

	
	int main () {
		int N1, N2;
		printf ("Insira o primeiro numero \"A\": ");
		scanf("%d", &N1);
		printf ("Insira o segundo numero \"B\": ");
		scanf("%d", &N2);
		N1%N2==0 ? printf("A e divisivel por B.\n") : printf("A nao e divisivel por B.\n");
		system ("pause");
		return 0;
		
		
	}
