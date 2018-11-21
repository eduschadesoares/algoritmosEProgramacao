	#include <stdio.h>
	#include <stdlib.h>
	//modificador de tipos
	int main () {
		int N, I;
		double fat;
		printf("Insira um numero: ");
		scanf("%d", &N);
		if (N < 0)
			printf("Fatorial nao exste.\n");
			else {
			fat = 1;
			I = 2;
				while (I<=N){
				fat=fat*I;
				I=I+1;	}
			printf("Fatorial de %d eh %.2lf\n", N, fat);}	
		system("pause");
		return 0;	
	}
