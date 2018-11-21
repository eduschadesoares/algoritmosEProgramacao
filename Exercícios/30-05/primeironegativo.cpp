	#include <stdlib.h>
	#include <stdio.h>
	
	int main () {
		int  n, media, maior, qnte;
		media=0;
		printf("Insira whatever: ");
		scanf("%i", &n);
			while (n>=0){
				media=media+n;
				qnte=qnte+1;
					if (n>maior) {
						maior=n;
					}
				printf("Inrira outro whatever: ");
				scanf("%i", &n);
			}
		if (qnte>0){
			printf("Media: %d\n", media/qnte);
			printf("Maior valor digitado foi: %d\n", maior);
			}
		system("pause");
		return 0;
		
	}
