	#include <stdio.h>
	#include <stdlib.h>
	//solução usando while
	int main () {
		int N, I;
	printf("Insira um valor inteiro positivo: ");
	scanf("%d", &N);
	I=1;
	while (I<=1000){
		if(I%N==0) 
		printf("%d eh multiplo de %d\n", I, N);
		I++; //ou I+1;
	}	
	system ("pause");
	return 0;
		
	}
