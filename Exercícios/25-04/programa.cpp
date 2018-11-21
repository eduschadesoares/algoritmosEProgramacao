	#include <stdio.h>
	#include <stdlib.h>
		
	int main(){
		float N1, N2;
		char OP;
		printf("Insira o primeiro numero: ");
		scanf("%f", &N1);
		printf("Insira o segundo numero: ");
		scanf("%f", &N2);
		printf("Insira a operacao (+,-,*,/): ");
		fflush(stdin); /*buffer do teclado*/
		scanf("%c", &OP);
		switch (OP){
			case '+' :printf("%.1f\n", N1+N2); break;
			case '-' :printf("%.1f\n", N1-N2); break;
			case '*' :printf("%.1f\n", N1*N2); break;
			case '/' :printf("%.1f\n", N1/N2); break;
			default: printf("Como voce e burro, cara!\n");
		}
		system("pause");
		return 0;			
		
	}
