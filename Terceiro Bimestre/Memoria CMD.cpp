	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include <time.h>
	#include <locale.h>
	#include <unistd.h>
	#include <conio.h>
	#define N 5
	#define M 4
	#define F 10


	//Constantes
	char TAB[N][M];
	char FIG[F]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int TRY[N][M];
	char PEC[N][M];
	char pec={'*'};
	char CAR[N][M];
	char AUX1, AUX2;
	int x, y, pts=0;
	
	
	
	//Protótipos
	int menu(int);
	void inicializa();
	void embaralhe();
	void mostra();
	void joga();
//	void tab();
	
	
	
	int main() {
		int a;
		setlocale(LC_ALL, "portuguese");
		if (menu(a)==1) {
			inicializa();
			embaralhe();
			joga();
			printf(" Parabains, você venceu! =D");	
		}
		else {
			return 0;
		}
		return 0; 
	}
	
	int menu(int A) {
		char choose;
		int loop=0;
		while(loop==0) {
			printf(" ======================================\n");
			printf(" ===         Jogo da Memória        ===\n");
			printf(" ======================================\n");
			printf(" ======================================\n");
			printf(" ===    Jogar   |   Pressione (1)   ===\n");
			printf(" ======================================\n");
			printf(" ===    Sair    |   Pressione (2)   ===\n");
			printf(" ======================================\n");
			choose=getch();
			switch(choose) {
				case '1' :
					sleep(1);
					system("cls");
					return 1;
				break;
				
				case '2' :
					printf(" O jogo será encerrado.\n");
					sleep(2);
					system("cls");
					return 0;
					
				default :
					printf(" \"%c\" é uma opção inválida. Tente novamente.", choose);
					sleep(3);
					system("cls");
					loop=0;
					break;
			}
		}
	}
	
	void inicializa() {
		int i, j, x=0;
		for(i=0; i<N; i++)
			for(j=0; j<M; j++) {
				TAB[i][j] = FIG[x];
				if(x<F-1)
					x++;
				else
					x=0;
			}
			
		for(i=0; i<N; i++) 
			for(j=0; j<M; j++) {
				TRY[i][j]=pec;
			}
			
		for(i=0; i<N; i++) 
			for(j=0; j<M; j++) {
				CAR[i][j]=pec;
			}
	}
	
	void embaralhe(){
		srand(time(NULL));
		char aux;
		int i, j, a, b;
		for (i=1; i<N; i++)
			for (j=1; j<M; j++)	{
		 		a = rand()%M;
				b = rand()%N;
				aux  = TAB[i][j];
				TAB[i][j] = TAB[a][b];
				TAB[a][b] = aux;
		}
	}
	
	void mostra() {
		int i, j;
				printf("  Pontos: %d\n\n", pts);
		printf("  ========= ==========================================\n");
		printf("  =  Y/X  = =   1   =  =   2   =  =   3   =  =   4   =\n");
		printf("  ========= ==========================================\n");
		for(i=0; i<N; i++) {
			printf("  =   %d   =", i+1);
			for(j=0; j<M; j++) {
				printf("   < %c >   ", TAB[i][j]);				
			}
			printf(" \n  ========= ==========================================");
			printf("\n");	
			}		
		printf("  Pontos: %d\n\n", pts);
		printf("  ========= ==========================================\n");
		printf("  =  Y/X  = =   1   =  =   2   =  =   3   =  =   4   =\n");
		printf("  ========= ==========================================\n");
		for(i=0; i<N; i++) {
			printf("  =   %d   =", i+1);
			for(j=0; j<M; j++) {
				printf("   < %c >   ", CAR[i][j]);				
			}
			printf(" \n  ========= ==========================================");
			printf("\n");	
			}
		}
	
	void joga() {
		int i=0, j=0, cx1, cy1, cx2, cy2;			
		while(i==0) {
			mostra();
			printf(" Insira a coordenada x da carta 1: ");
			scanf("%d", &x);
			fflush(stdin);
			
			if(x<1 || x>M) {
				printf(" Coordenada inválida. Insira novamente.");
				sleep(2);
				system("cls");
				i=0;
			}
			else {
				i=1;
				sleep(1);
				system("cls");
							
				while(j==0) {
					mostra();
					printf(" Insira a coordenada y da carta 1: ");
					scanf("%d", &y);
					fflush(stdin);
					if(y<1 || y>N) {
						printf(" Coordenada inválida. Insira novamente.");
						sleep(2);
						system("cls");
						j=0;
					}
					else {
						j=1;
						sleep(1);
						system("cls");
					}
				}
			}		
		}
				
		AUX1=TAB[y-1][x-1];
		cx1=x;
		cy1=y;		
		CAR[cy1-1][cx1-1]=TAB[cy1-1][cx1-1];
		
	/*	
		printf("  ========= ==========================================\n");
		printf("  =  Y/X  = =   1   =  =   2   =  =   3   =  =   4   =\n");
		printf("  ========= ==========================================\n");
		for(i=0; i<N; i++) {
			printf("  =   %d   =", i+1);
			for(j=0; j<M; j++) {
				printf("   < %c >   ", CAR[i][j]);				
			}
			printf(" \n  ========= ==========================================");
			printf("\n");	
		} */
		
		
		i=0;
		j=0;
			
		while(i==0) {
			mostra();
			printf(" Coodenadas 1ª carta x:%d, y:%d.\n", cx1, cy1);
			printf(" Insira a coordenada x da carta 2: ");
			scanf("%d", &x);
			fflush(stdin);
			if(x<1 || x>M) {
				printf(" Coordenada inválida. Insira novamente.");
				sleep(2);
				system("cls");
				i=0;
			}
			else {				
				i=1;
				sleep(1);
				system("cls");			
				while(j==0) {
					mostra();
					printf(" Insira a coordenada y da carta 2: ");
					scanf("%d", &y);
					fflush(stdin);
					if(y<1 || y>N) {
						printf(" Coordenada inválida. Insira novamente.");
						sleep(2);
						system("cls");	
						j=0;
					}
					else {
						j=1;
						sleep(1);
						system("cls");
					}
				}
			}		
		}
				
		AUX2=TAB[y-1][x-1];
		cx2=x;
		cy2=y;
		
		CAR[cy2-1][cx2-1]=TAB[cy2-1][cx2-1];
		
		system("cls");		
		printf("  Pontos: %d\n\n", pts);
		printf("  ========= ==========================================\n");
		printf("  =  Y/X  = =   1   =  =   2   =  =   3   =  =   4   =\n");
		printf("  ========= ==========================================\n");
		for(i=0; i<N; i++) {
			printf("  =   %d   =", i+1);
			for(j=0; j<M; j++) {
				printf("   < %c >   ", CAR[i][j]);				
			}
			printf(" \n  ========= ==========================================");
			printf("\n");	
			}
		sleep(3);
		
		if(cx1==cx2 && cy1==cy2) {
			printf(" Vose está tentando me ludibriar?\n");
			printf(" Par incorreto!\n");
		}
		else {
			if(AUX1==AUX2) {
				if(TRY[cx1-1][cy1-1]==1 || TRY[cy2-1][cy2-1]==1) {
					printf(" Carta já selecionada!\n");
				}	
				else {
					printf(" Você encontrou um par! =D\n");
					pts++;
					TRY[cy1-1][cx1-1]=TAB[cy1-1][cx1-1];
					TRY[cy2-1][cx2-1]=TAB[cy2-1][cx2-1];
				}
			}
			else {
				printf(" Par incorreto!\n");
				TRY[cy1-1][cx1-1]=pec;
				TRY[cy2-1][cx2-1]=pec;
				CAR[cy2-1][cx2-1]={'*'};
				CAR[cy1-1][cx1-1]={'*'};
			}
		}
		
		printf(" Coodenadas 1ª carta x:%d, y:%d.\n", cx1, cy1);
		printf(" Coodenadas 2ª carta x:%d, y:%d.\n", cx2, cy2);
		
		for(i=0; i<N; i++) {
			for(j=0; j<M; j++) {
				printf(" %c ", TRY[i][j]);
			}
			printf("\n");
		}
				
		sleep(1);
		system("cls");
		while(pts<10) {
			joga();		
		}

	}
	

