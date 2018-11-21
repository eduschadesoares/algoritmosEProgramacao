	#include <stdio.h>
	#include <stdlib.h>
	//solução usando o do-while (teste no final)
	//observe a diferença do repita e do comando do-while em C
	int main () {
		int N, I;
	printf("Insira um valor inteiro positivo: ");
	scanf("%d", &N);
	I=1;
	do {
		if(I%N==0)
		printf("%d eh multiplo de %d\n", I, N);
		I++;
				
	} while (I<=1000);
	
	system ("pause");
	return 0;
		
	}
