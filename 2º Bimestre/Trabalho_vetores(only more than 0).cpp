	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	#include <locale.h>
	#include <unistd.h>
	#define N 50

	int main() {
		setlocale(LC_ALL,"portuguese");

		//Vari�veis
		int vet[N];
		int i, j, tam, robson=0, nelso=1, cleber, never_ends;

		//Vetor aleat�rio
		srand(time(NULL));
			for(i=0; i<N; i++)
				vet[i]=rand()%2;

		//Apresenta��o do vetor
			printf("\n");
			printf(" |||||||||||||||||||||\n");
				usleep(80000);					
			printf(" || VETOR ALEAT�RIO ||\n");
				usleep(80000);
			printf(" |||||||||||||||||||||\n");
				usleep(80000);
		for(i=0; i<N; i++){
			printf(" || Posi��o %2.1d", i+1);
				usleep(19000);
			printf(" ||%2.1d", vet[i]);
				usleep(19000);
			printf(" ||\t\n");
		}
			printf(" |||||||||||||||||||||\n");
				usleep(80000);
				

		//Lendo o tamanho do espa�o
		printf("\nFa�a uma busca pela mem�ria dispon�vel no vetor.");
		printf(" (N�mero positivo diferente de 0): "); //At� porque n�o faria sentido um valor "0".
		never_ends:
			scanf("%d", &tam);
		
		if(tam>0) {

		//Calculo do espa�o (First fit)
			for(i=0; i<N; i++) {
				if(vet[i]==0) {
					robson++;
					if(robson==tam) {
						printf("First fit: %d\n", nelso-tam+1);
					break;
					}
				}
				else
					robson=0;
					nelso++;
				}
				if (robson<tam) {
					printf("Mem�ria n�o dispon�vel.\n");
					printf("\n\nInsira um novo n�mero: ");
					robson=0;
            		nelso=1;
					goto never_ends;
				}
		//Calculo do espa�o (Best fit)
			else {
				robson=N+1;
				cleber=-1;
				for(i=0; i<N; i++) {
					if(vet[i]==0) {
						robson++;
					}
					else {
                        if(robson<=nelso && tam<=robson) {
                            nelso=robson;
							cleber=i-robson;
                        }
                        if(robson==tam) {
                            break;
                        }
					robson=0;
					}
            	}
            	
             printf("Best fit: %d" , cleber+1);
             printf("\n\nInsira uma nova busca de mem�ria: ");
             robson=0;
             nelso=1;
             goto never_ends;             
            }
        }
        
        //Finaliza��o do programa
        
        else
        	printf("\n\n\n\n\n\n\n\n\nO programa foi finalizado.\n");
        	printf("\n\n");
        	
        	
        //Easter egg
			
			printf(" |||||||||||  ||||||    |||  |||||||||\n");
				usleep(80000);	
			printf(" |||          ||| |||   |||  |||    |||\n");
				usleep(80000);
			printf(" |||||||||||  |||  |||  |||  |||     |||\n");
				usleep(80000);				
			printf(" |||          |||   ||| |||  |||    |||\n");
				usleep(80000);
			printf(" |||||||||||  |||    ||||||  |||||||||\n");
				usleep(80000);
			printf("\n\n");
					
		system("pause");		
        return 0;
	}
	
	/*
	Eduardo Luiz Schade Soares - 16016923;
	Matheus Gomes - ;
	*/
