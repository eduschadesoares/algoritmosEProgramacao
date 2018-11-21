	#include <stdio.h>
	#include <stdlib.h>
	//solução usando o for
	int main () {
	int N, I;
	printf("Insira um valor inteiro positivo: ");
	scanf("%d", &N);
	for(I=1; I<=1000; I++);
		if(I%N==0) 
		printf("%d eh multiplo de %d\n", I, N);	
	system ("pause");
	return 0;
		
	}
