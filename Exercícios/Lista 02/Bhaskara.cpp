	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	int main () {
		float A, B, C, delta, x1, x2;
		printf("Insira o valor de \"A\": ");
		scanf("%f" , &A);
		printf("Insira o valor de \"B\": ");
		scanf("%f" , &B);
		printf("Insira o valor de \"C\": ");
		scanf("%f" , &C);
		delta = pow(B,2) - 4*A*C;
		printf("Valor de delta: %.2f\n", delta);
		if (delta>0){
			x1=(-B+sqrt(delta)/(2*A));
			x2=(-B-sqrt(delta)/(2*A));
			printf(" x1: %.2f\n x2: %.2f\n", x1, x2);
		}
		else if (delta==0){
			x1=(-B/(2*A));
			printf("x1: %.2f\n", x1);
		}	
		else 
		printf("Nao existem raizes reais, seu animal!\n");
		system ("pause");
		return 0;	
		
	}
