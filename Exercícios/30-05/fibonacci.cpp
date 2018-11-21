	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		int fib, ant1, ant2, I, N;
		printf("Insira qual termo da serie de \"Fibonacci\": ");
		scanf("%d", &fib);
		if (N<=0)
			printf("Termo nao existe.\n");
		else {
			fib=1, ant1=1, ant2=1;
			I=2;
			
				while (I<N) {
				fib=1;
				ant2=ant1;
				ant1=fib;
				I++;	
		}
		printf("O termo %d da serie eh %d\n", N, fib);
		}	
		system("pause");
		return 0;
}
