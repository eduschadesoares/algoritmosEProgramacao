	#include <stdio.h>
	#include <stdlib.h>
	
	int main () {
		float A, B, C;
		printf("Informe os 3 lados, seu animal: ");
		scanf("%f %f %f", &A, &B, &C);
			if ((A<B+C) && (B<A+C) && (C<A+B))
			
				if(A==B && B==C)
				printf("Equilatero\n"); 
				
				else
						if (A==B || A==C || C==B)
						printf("Isosceles\n");
						else 
						printf("Escaleno\n");
					
			else
			printf("Nao e um triangulo\n");
			
			system("pause");
			return 0;
						
		
		
		
	}
