	#include <stdio.h>
	#include <stdlib.h>
	
	int main (){
		long int num, I;
		int primo;
		printf("Insira um numero para saber se este e primo ou nao: ");
		scanf("%d", &num);
		if (num <= 0 )
		printf("O numero deve ser positivo, seu animal.\nNao existe numero primo negativo!\n");
			else {
			primo=1;
			I=num-1;
				while (I>1 && primo==1){
				printf("%ld\n", I);
					 if (num%I==0)
						primo=0;
						I--;
						}
				if(primo && num != 1)
					printf("Eh primo.\n");
				else 
					printf("Nao eh primo.\n");
				
				}
			system("pause");
			return 0;
				
	}
