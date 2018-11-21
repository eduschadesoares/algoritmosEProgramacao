	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	int main () {
		float N;
		printf("Insira um numero: ");
		scanf("%f", &N);
		if (N>=0)
		printf("%.1f\n", sqrt(N));
		else
		printf("%.1f\n", pow(N, 2));
		system ("pause");
		return 0;
		
		
	}
