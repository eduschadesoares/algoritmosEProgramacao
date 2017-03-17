//#PANQUECA

//BIBLIOTECAS (INÍCIO) =======================================================//

#include <allegro.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//BIBLIOTECAS (FIM) ==========================================================//

//CONSTANTES (INÍCIO) ========================================================//

#define maxx 1366
#define maxy 768

//CONSTANTES (FIM) ===========================================================//

//PROTÓTIPOS (INÍCIO) ========================================================//

void init();
void deinit();
void menu();
void creditos();
void jogo();

//PROTÓTIPOS (FIM) ===========================================================//

//FUNÇÃO PRINCIPAL (INÍCIO) ==================================================//

int main() {
	init();
	menu();
	deinit();
	return 0;
}

END_OF_MAIN()

//FUNÇÃO PRINCIPAL (FIM) =====================================================//





























//FUNÇÕES (INÍCIO) ===========================================================//

//FUNÇÃO INICIALIZAÇÃO (INÍCIO) **********************************************//

void init() {
	int depth;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) {
    	depth = 8;
    }
    
//Definição de Cor
    
	set_color_depth(depth);
	install_timer();
	install_keyboard();
	install_mouse();
	set_gfx_mode(GFX_AUTODETECT_FULLSCREEN, maxx, maxy, 0, 0);
	install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);
	set_window_title("Elefante");
	
//Volume
    
	set_volume(150, 255);
	
}

//FUNÇÃO INICIALIZAÇÃO (FIM) *************************************************//

//FECHAR O ALLEGRO (INÍCIO) **************************************************//

void deinit() {
	clear_keybuf();
	allegro_exit();
}

//FECHAR O ALLEGRO (FIM) *****************************************************//

//FUNÇÃO MENU (INÍCIO) *******************************************************//

void menu() {
     
//Palettes

    PALETTE	pal;
    
//Bitmaps

    BITMAP* cursor = load_bitmap("source\\arrow.BMP", NULL);
    BITMAP* tela = create_bitmap(SCREEN_W, SCREEN_H);
    BITMAP  *maintext = load_bitmap("Menus\\maintext.bmp",pal);
	BITMAP  *jogar1 = load_bitmap("Menus\\jogar1.bmp",pal);
	BITMAP  *jogar2 = load_bitmap("Menus\\jogar2.bmp",pal);
	BITMAP  *cred1 = load_bitmap("Menus\\cred1.bmp",pal);
	BITMAP  *cred2 = load_bitmap("Menus\\cred2.bmp",pal);
	BITMAP  *sair1 = load_bitmap("Menus\\sair1.bmp",pal);
	BITMAP  *sair2 = load_bitmap("Menus\\sair2.bmp",pal);
	BITMAP  *prod = load_bitmap("Menus\\prod.bmp", pal);
	
//Menu Loop

	while (!key[KEY_ESC]) {
	    draw_sprite(tela, cursor, mouse_x, mouse_y);
	    draw_sprite(screen, tela, 0, 0);
	    clear(tela);
	    clear_keybuf();
	    
	    draw_sprite(tela, maintext, (maxx / 2) - 370, 100);
	    draw_sprite(tela, jogar1, (maxx / 2) - 65 , 450);
	    draw_sprite(tela, cred1, (maxx / 2) - 310 , 595);
	    draw_sprite(tela, sair1, (maxx - 460) , 600);
    
// Jogar
    
	    if(mouse_x > (maxx / 2 - 65) && mouse_x < (maxx / 2 + 65) && mouse_y > 450 && mouse_y < 496) {
	        draw_sprite(tela, jogar2, (maxx / 2) - 65 , 450);  
	       	if(mouse_b == 1) {
	        	jogo(); 
	       	}
	    }
    
// Créditos

	    if(mouse_x > (maxx / 2 - 310) && mouse_x < (maxx/2 - 163) && mouse_y > 595 && mouse_y < 641) {
	          draw_sprite(tela, cred2, (maxx / 2) - 310 , 595);
	          if(mouse_b == 1)
	      {  
	          clear(tela);
	          creditos();
	      }
	    }
    
// Sair

	    if(mouse_x > (maxx - 460) && mouse_x < (maxx - 390) && mouse_y > 600 && mouse_y < 635) {
	           draw_sprite(tela, sair2, (maxx - 460) , 600); 
	           if(mouse_b == 1){
	               deinit();
	           }
	    }
    
    
//Finalização Bitmaps
    
	}
	
    destroy_bitmap(cursor);
    destroy_bitmap(tela);
    destroy_bitmap(maintext);
    destroy_bitmap(jogar1);
    destroy_bitmap(jogar2);
    destroy_bitmap(cred1);
    destroy_bitmap(cred2);
    destroy_bitmap(sair1);
    destroy_bitmap(sair2);
    destroy_bitmap(prod);
    
}

//FUNÇÃO MENU (FIM) **********************************************************//

//FUNÇÃO CRÉDITOS (INÍCIO) ***************************************************//

void creditos () {
     
//Palettes

    PALETTE pal;
          
//Bitmaps

    BITMAP *tela = create_bitmap(SCREEN_W, SCREEN_H);
    BITMAP *prod = load_bitmap("Menus\\prod2.BMP", pal);
     
//Créditos Loop
     
    while (!keypressed()) { 
    //clear(screen);
        draw_sprite(screen, prod, 0, 0); 
    }
     
//Finalização Bitmaps

    destroy_bitmap(tela);
    destroy_bitmap(prod);
    
}

//FUNÇÃO CRÉDITOS (FIM) ******************************************************//

//FUNÇÃO JOGO (INÍCIO) *******************************************************//

void jogo() {

//Variáveis

	int i, j;
	int num[10], auxnum;
	int match[10], match2[10];
	int paral=0, limit=0;
	int first[10], second[10];
//	int vez=1;
//	int ponto=0;


	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, k=0, l=0;

//Palettes

    PALETTE pal;

//Bitmaps
     
    BITMAP* cursor = load_bitmap("source\\op_hd22.BMP", NULL);
    BITMAP* cursor2 = load_bitmap("source\\cl_hd22.BMP", NULL);
    BITMAP* tela = create_bitmap(SCREEN_W, SCREEN_H);
    BITMAP *pass;
    BITMAP *card[10], *bcard[10];
    BITMAP *tras[10];

//Birmaps Cartas

//BACK
    tras[0] = load_bitmap("Cartas\\Back.BMP", NULL); 
    tras[1] = load_bitmap("Cartas\\Back.BMP", NULL);
    tras[2] = load_bitmap("Cartas\\Back.BMP", NULL); 
    tras[3] = load_bitmap("Cartas\\Back.BMP", NULL);
    tras[4] = load_bitmap("Cartas\\Back.BMP", NULL); 
    tras[5] = load_bitmap("Cartas\\Back.BMP", NULL);  
    tras[6] = load_bitmap("Cartas\\Back.BMP", NULL); 
    tras[7] = load_bitmap("Cartas\\Back.BMP", NULL);
    tras[8] = load_bitmap("Cartas\\Back.BMP", NULL); 
    tras[9] = load_bitmap("Cartas\\Back.BMP", NULL);  

//FRONT
	card[0] = load_bitmap("Cartas\\C1.BMP", NULL); match[0] = 1;
	card[1] = load_bitmap("Cartas\\C2.BMP", NULL); match[1] = 2; 
	card[2] = load_bitmap("Cartas\\C3.BMP", NULL); match[2] = 3; 
	card[3] = load_bitmap("Cartas\\C4.BMP", NULL); match[3] = 4; 
	card[4] = load_bitmap("Cartas\\C5.BMP", NULL); match[4] = 5; 
	card[5] = load_bitmap("Cartas\\C1.BMP", NULL); match2[0] = 1; 
	card[6] = load_bitmap("Cartas\\C2.BMP", NULL); match2[1] = 2; 
 	card[7] = load_bitmap("Cartas\\C3.BMP", NULL); match2[2] = 3; 
	card[8] = load_bitmap("Cartas\\C4.BMP", NULL); match2[3] = 4; 
	card[9] = load_bitmap("Cartas\\C5.BMP", NULL); match2[4] = 5; 

//Embaralhar Cartas




	srand (time(NULL));

	for (i=0; i<10; i++) {
		j=rand()%10;
	    pass=card[i];
	    card[i]=card[j];
	    card[j]=pass;
	    auxnum=num[i];
	    num[i]=num[j];
	    num[j]=auxnum;
	}


//Tabuleiro

   	clear(tela);
	clear_keybuf();

//Jogo Loop


    while (!key[KEY_ESC]) { 

   	draw_sprite(screen, tela, 0, 0);

    clear(tela);

    clear_keybuf();

/*    draw_sprite(tela, card[0], 230, 250);

    draw_sprite(tela, card[1], 430, 250);

    draw_sprite(tela, card[2], 630, 250);

    draw_sprite(tela, card[3], 830, 250);

    draw_sprite(tela, card[4], 1030, 250);

    draw_sprite(tela, card[5], 230, 500);

    draw_sprite(tela, card[6], 430, 500);

    draw_sprite(tela, card[7], 630, 500);

    draw_sprite(tela, card[8], 830, 500);

    draw_sprite(tela, card[9], 1030, 500);

	draw_sprite(tela, cursor, mouse_x, mouse_y);
*/ 


    draw_sprite(tela, tras[0], 230, 250);

    draw_sprite(tela, tras[1], 430, 250);

    draw_sprite(tela, tras[2], 630, 250);

    draw_sprite(tela, tras[3], 830, 250);

    draw_sprite(tela, tras[4], 1030, 250);

    draw_sprite(tela, tras[5], 230, 500);

    draw_sprite(tela, tras[6], 430, 500);

    draw_sprite(tela, tras[7], 630, 500);

    draw_sprite(tela, tras[8], 830, 500);

    draw_sprite(tela, tras[9], 1030, 500);

	draw_sprite(tela, cursor, mouse_x, mouse_y);



//  Projeta cartas manualmente




        //Carta 1 
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 230 && mouse_x < 300 && mouse_y > 250 && mouse_y < 340) {
	        	tras[0] = card[0]; //Virar a carta
	        //		a = 0;
	        //		first[a] = match[a];
	        //		vez++;
	        //		select1=1;
        	}
		}


		//Carta 2
		if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 430 && mouse_x < 500 && mouse_y > 250 && mouse_y < 340 ) {
 				tras[1] = card[1];
        	}
		}


		//Carta 3
		if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 630 && mouse_x < 700 && mouse_y > 250 && mouse_y < 340 ) {
        		tras[2] = card[2];
        	}
		}
		

		//Carta 4
		if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 830 && mouse_x < 900 && mouse_y > 250 && mouse_y < 340 ) {
        		tras[3] = card[3];
        	}
		}


		//Carta 5
		if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 1030 && mouse_x < 1100 && mouse_y > 250 && mouse_y < 340 ) {
        		tras[4] = card[4];
        	}
		}

        //Carta 6
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 230 && mouse_x < 300 && mouse_y > 500 && mouse_y < 590) {
        		tras[5] = card[5];
        	}
		}


        //Carta 7
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 430 && mouse_x < 500 && mouse_y > 500 && mouse_y < 590) {
        		tras[6] = card[6];
        	}
		}


        //Carta 8
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 630 && mouse_x < 700 && mouse_y > 500 && mouse_y < 590) {
        		tras[7] = card[7];
        	}
		}


        //Carta 9
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 830 && mouse_x < 900 && mouse_y > 500 && mouse_y < 590) {
        		tras[8] = card[8];
        	}
		}


        //Carta 10
        if(mouse_b == 1) {
        	//draw_sprite(tela, cursor2, mouse_x, mouse_y);
        	if(mouse_x > 1030 && mouse_x < 1100 && mouse_y > 500 && mouse_y < 590) {
        		tras[9] = card[9];
        	}
		}




// ENFEITE
/*
        if (mouse_x > 230 && mouse_x < 230+85 && mouse_y > 250 && mouse_y < 250 + 115){
                    draw_sprite(tela, tras[2], 230, 250);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[0], 230, 250);
        }
        
        if (mouse_x > 430 && mouse_x < 430+85 && mouse_y > 250 && mouse_y < 250 + 115){
                    draw_sprite(tela, tras[2], 430, 250);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[1], 430, 250);
        }
        
        if (mouse_x > 630 && mouse_x < 630+85 && mouse_y > 250 && mouse_y < 250 + 115){
                    draw_sprite(tela, tras[2], 630, 250);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[2], 630, 250);
        }
        
        if (mouse_x > 830 && mouse_x < 830+85 && mouse_y > 250 && mouse_y < 250 + 115){
                    draw_sprite(tela, tras[2], 830, 250);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[3], 830, 250);
        }
        
        if (mouse_x > 1030 && mouse_x < 1030+85 && mouse_y > 250 && mouse_y < 250 + 115){
                    draw_sprite(tela, tras[2], 1030, 250);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[4], 1030, 250);
        }
        
        if (mouse_x > 230 && mouse_x < 230+85 && mouse_y > 500 && mouse_y < 500 + 115){
                    draw_sprite(tela, tras[2], 230, 500);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[5], 230, 500);
        }
        
        if (mouse_x > 430 && mouse_x < 430+85 && mouse_y > 500 && mouse_y < 500 + 115){
                    draw_sprite(tela, tras[2], 430, 500);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[6], 430, 500);
        }
        
        if (mouse_x > 630 && mouse_x < 630+85 && mouse_y > 500 && mouse_y < 500 + 115){
                    draw_sprite(tela, tras[2], 630, 500);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[7], 630, 500);
        }
        
        if (mouse_x > 830 && mouse_x < 830+85 && mouse_y > 500 && mouse_y < 500 + 115){
                    draw_sprite(tela, tras[2], 830, 500);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[8], 830, 500);
        }
        
        if (mouse_x > 1030 && mouse_x < 1030+85 && mouse_y > 500 && mouse_y < 500 + 115){
                    draw_sprite(tela, tras[2], 1030, 500);
                    draw_sprite(tela, cursor, mouse_x, mouse_y);
                    if(mouse_b==1) draw_sprite(tela, card[9], 1030, 500);
        }
         

*/



//Fim While
    }

     
//Finalização Bitmaps

	destroy_bitmap(cursor);
 //   destroy_bitmap(cursor2);
    destroy_bitmap(tela);
 //   destroy_bitmap(tras[0]);
   // destroy_bitmap(card[0]);
   // destroy_bitmap(card[1]);
  //  destroy_bitmap(card[2]);
  //  destroy_bitmap(card[3]);
  //  destroy_bitmap(card[4]);
  //  destroy_bitmap(card[5]);
   // destroy_bitmap(card[6]);
   // destroy_bitmap(card[7]);
 //   destroy_bitmap(card[8]);
//	destroy_bitmap(card[9]);

}

//FUNÇÃO JOGO (FIM) **********************************************************//


//FUNÇÕES (FIM) ==============================================================//
