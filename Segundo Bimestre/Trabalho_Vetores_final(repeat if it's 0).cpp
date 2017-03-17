	/*Alunos: Eduardo S. Soares; RA: 16016923;
			  Matheus R. Gomes; RA: 16267723;
	*/
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	#include <locale.h>
	//#include <unistd.h>
	//#include <windows.h>
	//#include <dos.h>
    #define N 50

	int main() {
		setlocale(LC_ALL,"portuguese");

		//Variáveis
		int vet[N];
		int i, tam, robson=0, nelso=1, cleber, never_ends;
		
		/*
		tam = Solicitação do espaço pelo usuário;
		robson = Tamanho do espaço encontrado no vetor;
		nelso = Contador de loops no dentro do vetor;
		cleber = Posição do best fit dentro do vetor;
		never_ends = Função para nunca encerrar o programa enquanto a
		condição necessária não é atingida;		
		*/

		//Vetor aleatório
		srand(time(NULL));
			for(i=0; i<N; i++)
				vet[i]=rand()%2;

		//Apresentação do vetor
			printf("\n");
			printf(" |||||||||||||||||||||\n");
			//	usleep(80000);					
			printf(" || VETOR ALEATÓRIO ||\n");
			//	usleep(80000);
			printf(" |||||||||||||||||||||\n");
			//	usleep(80000);
		for(i=0; i<N; i++){
			printf(" || Posição %2.1d", i+1);
			//	usleep(19000);
			printf(" ||%2.1d", vet[i]);
			//	usleep(19000);
			printf(" ||\t\n");
		}
			printf(" |||||||||||||||||||||\n");
			//	usleep(80000);
				

		//Lendo o tamanho do espaço
		printf("\nFaça uma busca pela memória disponível no vetor.");
		printf(" (Número positivo diferente de 0): "); //Até porque não faria sentido um valor "0".
		never_ends:
			scanf("%d", &tam);
			
		if(tam==0){
			printf("\nNúmero inválido! ");
		printf("Insira um número válido: ");
		goto never_ends;
        }
		
        if(tam>0) {

		//Calculo do espaço (First fit)
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
					printf("Memória não disponível.\n");
					printf("\n\nInsira um novo número: ");
					robson=0;
            		nelso=1;
					goto never_ends;
				}
		//Calculo do espaço (Best fit)
			else {
				robson=0;
				cleber=-1;
				nelso=N;
				for(i=0; i<N; i++) {
					if(vet[i]==0) {
						robson++;
					}
					if(vet[i]==1) {
						if(robson<=nelso && tam<=robson) {
                            nelso=robson;
							cleber=i-robson;
							if(tam==nelso) {
								break;
							}
                        }
                        robson=0;
					}	
                    	
				}
				if(robson<=nelso && tam<=robson) {
                            nelso=robson;
							cleber=i-robson;
                        }
                        robson=0;
			}
            	
            	
             printf("Best fit: %d" , cleber+1);
             printf("\n\nInsira uma nova busca de memória: ");
             robson=0;
             nelso=1;
             goto never_ends;             
            
        }
        
        //Finalização do programa
        
        else
        	printf("\n\n\n\n\n\n\n\n\n O programa foi finalizado!\n");
        	printf("\n\n");
        	
        	
        //Easter egg
			
			printf(" |||||||||||||  |||      |||  |||||||||||    |||||||||||  ||||||    |||  |||||||||\n");
			//	usleep(80000);	
			printf("      |||       |||      |||  |||            |||          ||| |||   |||  |||    |||\n");
			//	usleep(80000);
			printf("      |||       ||||||||||||  |||||||||||    |||||||||||  |||  |||  |||  |||     |||\n");
			//	usleep(80000);				
			printf("      |||       |||      |||  |||            |||          |||   ||| |||  |||    |||\n");
			//	usleep(80000);
			printf("      |||       |||      |||  |||||||||||    |||||||||||  |||    ||||||  |||||||||\n");
			//	usleep(80000);
			printf("\n\n");
			printf(" Data: %s\n Hora: %s\n\n", __DATE__, __TIME__);
			printf(" Alunos: Eduardo S. Soares - 16016923\n\t Matheus R. Gomes - 16267723\n\n\n\n");
		system("pause");		
        return 0;
	}
