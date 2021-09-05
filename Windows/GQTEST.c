/*                                                                                                                                                       
      # ###                                                  ###                                    # ###                                               
    /  /###  /                                 #              ###         ##                       /  /###                                               
   /  /  ###/                                 ###              ##          ##                     /  /  ###                                        #     
  /  ##   ##                                   #               ##           ##                  /  ##   ###                                      ##     
 /  ###                                                        ##                              /  ###    ###                                     ##     
##   ##            /###     /###      /###   ###       /###    ##      /##         /###       ##   ##     ## ##   ####      /##       /###     ######## 
##   ##   ###     / ###  / / ###  /  / ###  / ###     / ###  / ##     / ###       / #### /    ##   ##     ##  ##    ###  / / ###     / #### / ########  
##   ##  /###  / /   ###/ /   ###/  /   ###/   ##    /   ###/  ##    /   ###     ##  ###/     ##   ##     ##  ##     ###/ /   ###   ##  ###/     ##     
##   ## /  ###/ ##    ## ##        ##          ##   ##    ##   ##   ##    ###   ####          ##   ##     ##  ##      ## ##    ### ####          ##     
##   ##/    ##  ##    ## ##        ##          ##   ##    ##   ##   ########      ###         ##   ##     ##  ##      ## ########    ###         ##     
 ##  ##     #   ##    ## ##        ##          ##   ##    ##   ##   #######         ###        ##  ## ### ##  ##      ## #######       ###       ##     
  ## #      /   ##    ## ##        ##          ##   ##    ##   ##   ##                ###       ## #   ####   ##      ## ##              ###     ##     
   ###     /    ##    ## ###     / ###     /   ##   ##    ##   ##   ####    /    /###  ##        ###     /##  ##      /# ####    /  /###  ##     ##     
    ######/      ######   ######/   ######/    ### / ######    ### / ######/    / #### /          ######/ ##   ######/ ## ######/  / #### /      ##     
      ###         ####     #####     #####      ##/   ####      ##/   #####        ###/             ###   ##    #####   ## #####      ###/        ##    
                                                                                                          ##                                            
                                                                                                          /                                             
                                                                                                         /                                              
                                                                                                        /

LORE: Sei una persona che si sveglia e non trova i suoi biscotti preferiti: le Gocciole Pavesi, 
quindi, ti imbarcherai in un'avventura per averne una scorta a vita. BASATO SU UNA STORIA VERA (la 
trama di base, il resto è tutto inventato, magari avere una scorta a vita di Gocciole...) 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "conio.h"

#define FRECCIA_SU 72
#define FRECCIA_GIU 80
#define FRECCIA_DX 77
#define FRECCIA_SX 75
#define ESC 27
#define C 100
#define R 100

#define H_BUCA 50
#define H_OSVEGO 15
#define H_GT 35
#define H_ORO 25
#define H_MISURA 15
#define H_BZ 40

#define A_BUCA 20
#define A_OSVEGO 10
#define A_GT 15
#define A_ORO 20
#define A_MISURA 15
#define A_BZ 20

int r, c, i, i1, j, stampaY[1], stampaX[1], health[1], posX[1], posY[1], trigger[1];
int dg[1], gaiuto[1], lat[1], tg[1], te[1], pv[1], im[1], cartvet[1];
char txt[200];


const char *pulisciTXT(char txt[200]){
    for(i = 0; i < 200; i++){
        txt[i] = ' ';
    }
    return txt;
}

void mapInv(int map1[R][C]){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //R 0 mappa
    printf("+");
    for(i = 0; i < C/2; i++){
        printf("-");
    }
    printf("+");
    
    //R 0 inventario
    /*printf("+");
    for(i = 0; i < 15; i++){
        printf("-");
    }
    printf("+");*/
    printf("\n");

    r = stampaY[0];
    for(i1 = 0; i1 < 16; i1++){   
        printf("|");
        c = stampaX[0];
        
        for(i = 0; i < C/2; i++){
            switch(map1[r][c]){
                case 0:{
                    printf(" ");
                    break;
                }
                case 1:{
                    printf("X");
                    break;
                }
                case 2:{
                    printf("O");
                    break;
                }
                case 3:{
                    printf("%c", 248);
                    break;
                }
                case 4:{
                    SetConsoleTextAttribute(hConsole,4);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 5:{
                    SetConsoleTextAttribute(hConsole,2);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 6:{
                    SetConsoleTextAttribute(hConsole,2);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 7:{
                    SetConsoleTextAttribute(hConsole,2);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 8:{
                    SetConsoleTextAttribute(hConsole,2);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 9:{
                    SetConsoleTextAttribute(hConsole,2);
                    printf("%c", 254);
                    SetConsoleTextAttribute(hConsole,7);
                    break;
                }
                case 10:{
                    printf(" ");
                    break;
                }
                case 11:{
                    printf(" ");
                    break;
                }
                case 12:{
                    printf(" ");
                    break;
                }
                case 13:{
                    printf(" ");
                    break;
                }
                case 14:{
                    printf(" ");
                    break;
                }
                case 15:{
                    printf(" ");
                    break;
                }case 16:{
                    printf(" ");
                    break;
                }
                case 17:{
                    printf(" ");
                    break;
                }
                case 18:{
                    printf(" ");
                    break;
                }
                case 50:{
                    printf(" ");
                    break;
                }
                
            }
            c++;
            
        }
        printf("|");
        
        printf("|");
        /*    
        if(i1 == 0){
            printf("INVENTARIO     ");
            printf("|");
            printf("\n");
        } else {
            for(i = 0; i < 15; i++){
                printf(" ");
            }
            printf("|");
            printf("\n");
        }*/
        printf("\n");
        r++;
    }

    //ultima riga mappa
    printf("+");
    for(i = 0; i < C/2; i++){
        printf("-");
    }
    printf("+");

    //ultima riga inventario
    /*printf("+");
    for(i = 0; i < 15; i++){
        printf("-");
    }
    printf("+");*/
    printf("\n");
}

void textbox(char txt[200]){
    
    printf("+");
    for(i = 0; i < C/2; i++){
        printf("-");
    }
    printf("+");
    printf("\n");

    for(i = 0; i < 4; i++){
        printf("|");
        for(i1 = 0; i1 < 50; i1++){
            printf("%c", txt[i]);
        }
        printf("|");
        printf("\n");    
    }
    
    printf("+");
    for(i = 0; i < C/2; i++){
        printf("-");
    }
    printf("+");
    printf("\n");
}

void stats(int map1[R][C]){

    printf("salute: %d, ", health[0]);
    printf("dogecoins: %d ", dg[0]);
    
}

void location(int map1[R][C]){
    switch(trigger[0]){
        case 10:{
            printf(" - STRADA\n");
            break;
        }
        case 11:{
            printf(" - CASA MIA\n");
            break;
        }
        case 12:{
            printf(" - CASA MANUEL\n");
            break;
        }
        case 13:{
            printf(" - CASA MAURO\n");
            break;
        }
        case 14:{
            printf(" - CASA OBAMA\n");
            break;
        }
        case 15:{
            printf(" - BOTTEGA DI MORSHU\n");
            break;
        }
        case 16:{
            printf(" - STABILIMENTO PAVESI\n");
            break;
        }
        case 17:{
            printf(" - FABBRICA GOCCIOLE\n");
            break;
        }
        case 18:{
            printf(" - STABILIMENTO BALOCCO\n");
            break;
        }
        
    }
}

void stampaCampo(int map1[R][C]){
    mapInv(map1);
    stats(map1);  
    location(map1);
    //textbox(txt);
}

void OBJ(){
    int c;
    srand(time(0));
    c = rand() % 6;
    switch(c){
        case 0:{
            dg[0] += 50;
            printf("-hai guadagnato 50 Dogecoins\n");
            Sleep(2500);
            break;
        }
        case 1:{
            gaiuto[0]++;
            printf("-hai raccolto una gocciola\n");
            Sleep(2500);
            break;

        }
        case 2:{
            lat[0]++;
            printf("-hai raccolto un latte\n");
            Sleep(2500);
            break;

        }
        case 3:{
            te[0]++;
            printf("-hai raccolto un te'\n");
            Sleep(2500);
            break;

        }
        case 4:{
            tg[0]++;
            printf("-hai raccolto un togo\n");
            Sleep(2500);
            break;

        }
        case 5:{
            pv[0]++;
            printf("-hai raccolto un pavesino\n");
            Sleep(2500);
            break;

        }
        case 6:{
            im[0]++;
            printf("-hai raccolto un infuso misterioso\n");
            Sleep(2500);
            break;

        }
    }

}

void death(){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);                                                                                           
    printf("      #######                            #####   ##    ##\n");                                          
    printf("    /       ###            #          ######  /#### #####\n");                                         
    printf("   /         ##           ###        /#   /  /  ##### #####                          #\n");             
    printf("   ##        #             #        /    /  /   # ##  # ##                          ##\n");             
    printf("    ###                                 /  /    #     #                             ##\n");             
    printf("   ## ###           /##  ###           ## ##    #     #      /###   ###  /###     ######## /###\n");    
    printf("    ### ###        / ###  ###          ## ##    #     #     / ###  / ###/ #### / ######## / ###  /\n"); 
    printf("      ### ###     /   ###  ##          ## ##    #     #    /   ###/   ##   ###/     ##   /   ###/\n");  
    printf("        ### /##  ##    ### ##          ## ##    #     #   ##    ##    ##            ##  ##    ##\n");    
    printf("          #/ /## ########  ##          ## ##    #     ##  ##    ##    ##            ##  ##    ##\n");   
    printf("           #/ ## #######   ##          #  ##    #     ##  ##    ##    ##            ##  ##    ##\n");   
    printf("            # /  ##        ##             /     #      ## ##    ##    ##            ##  ##    ##\n");   
    printf("  /##        /   ####    / ##         /##/      #      ## ##    ##    ##            ##  ##    ##\n");   
    printf(" /  ########/     ######/  ### /     /  #####           ## ######     ###           ##   ######\n");    
    printf("/     #####        #####    ##/     /     ##                ####       ###           ##   ####\n");     
    printf("|                                   #\n");                                                              
    printf(" '\)'                                ##\n");
    SetConsoleTextAttribute(hConsole, 7);                                                            
    printf("\n\nbruh");

    Sleep(5000);
    exit(0);                                         
  
}

void battle(int map1[R][C]){
    int enemy, e_health, damage, e_attack;
    srand(time(0));
    
    enemy = rand() % 6;

    switch (enemy){
        case 1:{
            e_health = H_BUCA;
            e_attack = A_BUCA;

            break;
        }
        case 2:{
            e_health = H_OSVEGO;
            e_attack = A_OSVEGO;
            break;
        }
        case 3:{
            e_health = H_GT;
            e_attack = A_GT;
            break;
        }
        case 4:{
            e_health = H_ORO;
            e_attack = A_ORO;
            break;
        }
        case 5:{
            e_health = H_MISURA;
            e_attack = A_MISURA;
            break;
        }
        case 6:{
            e_health = H_BZ;
            e_attack = A_BZ;
            break;
        }
    }


    int selezione=1;
	int codiceTasto;
	
	while(e_health > 1){

        system("cls");
        stampaCampo(map1);
        
        switch (enemy){
            case 1:{
                printf("ti approccia un disgustoso Bucaneve, che fai?\n");
                break;
            }
            case 2:{
                printf("ti approccia un noioso Osvego, che fai?\n");

                break;
            }
            case 3:{
                printf("Un rivoltante Gran Turchese ti minaccia, che fai?\n");
                break;
            }
            case 4:{
                printf("Incontri un Oro, che fai?\n");
                break;
            }
            case 5:{
                printf("Un Misura Integrale pensa che potrebbe batterti, che fai?\n");
                break;
            }
            case 6:{
                printf("Una Zuppola Balocco ti sfida, che fai?\n");
                break;
            }
        }
		
		if(selezione == 1){
			printf(">> ");
		}
		printf("Attacca\n");
		
		if(selezione == 2){
			printf(">> ");
		}
		printf("Inventario\n");
		
		codiceTasto = getch();
		
		switch(codiceTasto) {
		    case 72:{ // key up
		    	selezione--;
		    	
		    	if(selezione == 0){ //se sforo verso l'alto, ricomincio dal fondo
					selezione = 2;
		    	}
		    	break;
		    }    		        
		    case 80: { // key down	
				selezione++;
				if(selezione == 3){ //se sforo verso il basso, ricomincio dall'alto
					selezione = 1;
				}			
		    	break;
		    }  
		    case 13:{ //enter
				
				switch(selezione){
					case 1:{
                        system("cls");
                        stampaCampo(map1);
                        damage = rand() % 25;
						e_health -= damage;
                        printf("hai inflitto %d di danno\n", damage);
                        Sleep(1500);

                        if(e_health > 0){
                            health[0] -= e_attack;
                            printf("hai subito %d", e_attack);
                            Sleep(1500);
                            if(health[0] < 1){
                                death();
                            }
                        }
						break; //uscire dallo switch
					}
					case 2:{
						//Inventario
                        if(e_health > 0){
                            health[0] -= e_attack;
                            printf("hai subito %d", e_attack);
                            Sleep(1500);
                            if(health[0] < 1){
                                death();
                            }
                        }

						break; //uscire dallo switch
					}
				}
				
		    	break;
		    }
		}         
	}
    system("cls");
    stampaCampo(map1);
    printf("un altro biscotto impuro sconfitto!!\n");
    Sleep(2000);
}


void morshu(int map1[R][C]){
    int selezione=1;
	int esci=0; //all'inizio non voglio uscire dal ciclo
	int codiceTasto;
    int q, prezzo;
	
	
	while(!esci){
        system("cls");
        stampaCampo(map1);
        printf("Latte, Togo, Infuso misterioso, lo vuoi? Sono tuoi amico mio, ma solo se tieni abbastanza Dogecoins!\n");
		
		if(selezione == 1){
			printf(">> ");
		}
		printf("Gocciole - 200 D\n");
		
		if(selezione == 2){
			printf(">> ");
		}
		printf("Latte - 50 D\n");
		
		if(selezione == 3){
			printf(">> ");
		}
		printf("Te' - 100 D\n");
		
		if(selezione == 4){
			printf(">> ");
		}
		printf("Togo - 60 D\n");

        if(selezione == 5){
			printf(">> ");
		}
		printf("Pavesini - 10 D\n");

        if(selezione == 6){
			printf(">> ");
		}
		printf("Infuso misterioso - 30 D\n");
        
        if(selezione == 7){
			printf(">> ");
		}
		printf("Esci\n");
		
		codiceTasto = getch();
		
		switch(codiceTasto) {
		    case 72:{ // key up
		    	selezione--;
		    	
		    	if(selezione == 0){ //se sforo verso l'alto, ricomincio dal fondo
					selezione = 7;
		    	}
		    	break;
		    }    		        
		    case 80: { // key down	
				selezione++;
				if(selezione == 8){ //se sforo verso il basso, ricomincio dall'alto
					selezione = 1;
				}			
		    	break;
		    }  
		    case 13:{ //enter
				system("cls");
                stampaCampo(map1);
                if(selezione > 0 && selezione < 7){    
                    printf("Molto bene, e quanto ne vorresti?");
                    do{
                        scanf("%d", &q);
                    }while(q < 1);
                }
				
                switch(selezione){
					case 1:{
                        prezzo = q * 200;
                        if(dg[0] >= prezzo){
                            gaiuto[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d Gocciole", gaiuto[0]);
                            Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
						break; //uscire dallo switch
					}
					case 2:{
                        prezzo = q * 50;
                        if(dg[0] >= prezzo){
                            lat[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d latte", lat[0]);
                            Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
                        break; //uscire dallo switch
					}
					case 3:{
                        prezzo = q * 100;
                        if(dg[0] >= prezzo){
                            te[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d Te'", te[0]);
                        Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
                        break; //uscire dallo switch
					}
                    case 4:{
                        prezzo = q * 60;
                        if(dg[0] >= prezzo){
                            tg[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d Togo", tg[0]);
                            Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
                        break; //uscire dallo switch
					}
                    case 5:{
                        prezzo = q * 10;
                        if(dg[0] >= prezzo){
                            pv[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d Pavesini", pv[0]);
                        Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
                        break; //uscire dallo switch
					}
                    case 6:{
                        prezzo = q * 30;
                        if(dg[0] >= prezzo){
                            im[0] += q;
                            dg[0] -= prezzo;
                            printf("Hai acquistato: %d infuso misterioso", im[0]);
                        Sleep(2500);
                        } else {
                            printf("perdonami, ma non ti posso fare credito, torna quando sarai un po' piu', mmmmmh, ricco\n");
                            Sleep(2500);
                        }
                        break; //uscire dallo switch
					}
                    case 7:{
                        esci = 1;
                        break;
                    }
				}
		    	break;
		    }
		}
	}

}

void manuel(int map1[R][C]){
    int esci = 0, selezione = 1, codiceTasto;

    while(!esci){
        system("cls");
        stampaCampo(map1);
        printf("hey, vuoi un po di carta?");
        Sleep(1500);
        printf("Manuel ti offre della carta, che fai?");

		if(selezione == 1){
			printf(">> ");
		}
		printf("accetta la carta\n");
		
		if(selezione == 2){
			printf(">> ");
		}
		printf("Rifiuta la carta\n", pv[0]);
		
		codiceTasto = getch();
		
		switch(codiceTasto) {
		    case 72:{ // key up
		    	selezione--;
		    	
		    	if(selezione == 0){ //se sforo verso l'alto, ricomincio dal fondo
					selezione = 2;
		    	}
		    	break;
		    }    		        
		    case 80: { // key down	
				selezione++;
				if(selezione == 3){ //se sforo verso il basso, ricomincio dall'alto
					selezione = 1;
				}			
		    	break;
		    }  
		    case 13:{ //enter
				
				switch(selezione){
					case 1:{
                        cartvet[0]++;
                        printf("hai raccolto un pezzo di carta");
                        Sleep(1500);
						break; 
					}
					case 2:{
                        printf("hai rifiutato la carta");
                        Sleep(1500);
						break; //uscire dallo switch
					}
				}
		    	break;
		    }
		}
	}
    
}

void event(int map1[R][C]){
    switch(map1[posY[0]][posX[0]]){
        case 3:{
            OBJ();
            break;
        }
        case 4:{
            battle(map1);
            break;
        }
        case 5:{
            
        }
        case 6:{
            morshu(map1);
            break;
        }
        case 7:{
            manuel(map1);
            break;
        }
    }
}

void inventario(){

    int selezione=1;
	int esci=0; //all'inizio non voglio uscire dal ciclo
	int codiceTasto;

	
    while(!esci){
        int m;
        system("cls");
        printf("Dogecoins: %d\n - Criptovaluta che prima o poi raggiungerà il dollaro (aspetta e spera), scambia con Morshu per avere tutto ciò che vuoi", dg[0]); //valuta
        printf("Gocciole: %d - questo non è un biscottto, è IL biscotto\n", gaiuto[0]);//uccidono istantaneamente il nemico
        printf("Latte: %d - Ricco di calcio! Aumenta la densità ossea e la tua difesa\n", lat[0]);//aumenta difesa
        printf("Togo: %d - Può non sembrare, ma questo biscotto a forma di bastoncino fa 10 di danno se lo si usa nel modo giosto\n", tg[0]);//infligge 10 di danno
		if(selezione == 1){
			printf(">> ");
		}
		printf("Te': %d - Il migliore amico delle Gocciole e pieno di effetti curativi! Ripristina la salute\n", te[0]);//ripristina salute
		
		if(selezione == 2){
			printf(">> ");
		}
		printf("Pavesini: %d - Leggeri perché sono fatti dal 90% di aria ma quel 10% di sostanza aumenta la salute\n", pv[0]);//aumenta salute di 10
		
		if(selezione == 3){
			printf(">> ");
		}
		printf("Infuso misterioso: %d - E' una sorpresa\n", im[0]);//?

        printf("Carta: %d - ottimo per disinfettare superfici con l'alcol 90°. L'utilita' di questo oggetto in questo gioco? Nessuna\n", cartvet[0]);
		
		if(selezione == 4){
			printf(">> ");
		}
		printf("Esci\n");
		
		codiceTasto = getch();
		
		switch(codiceTasto) {
		    case 72:{ // key up
		    	selezione--;
		    	
		    	if(selezione == 0){ //se sforo verso l'alto, ricomincio dal fondo
					selezione = 4;
		    	}
		    	break;
		    }    		        
		    case 80: { // key down	
				selezione++;
				if(selezione == 5){ //se sforo verso il basso, ricomincio dall'alto
					selezione = 1;
				}			
		    	break;
		    }  
		    case 13:{ //enter
				
				switch(selezione){
					case 1:{
						if(te[0] > 0){
                            te[0]--;
                            health[0] = 100;
                        }
						break; //uscire dallo switch
					}
					case 2:{
						if(pv[0] > 0){
                            pv[0]--;
                            health[0] += 10;
                        }
						break; //uscire dallo switch
					}
					case 3:{
						if(im[0] > 0){    
                            m = rand() % 4;
                            switch(m){
                                case 0:{
                                    health[0] += 10;
                                    printf("Hai guadagniato 10 di vita\n");
                                    break;
                                }
                                case 1:{
                                    health[0] += 20;
                                    printf("Hai guadagniato 20 di vita\n");
                                    break;
                                }
                                case 2:{
                                    health[0] += 30;
                                    printf("Hai guadagniato 30 di vita\n");
                                    break;
                                }
                                case 3:{
                                    health[0] -= 10;
                                    printf("Hai perso 10 di vita\n");
                                    break;
                                }
                                case 4:{
                                    health[0] -= 20;
                                    printf("Hai perso 20 di vita\n");
                                    break;
                                }
                            }  
                        }
                        if(health[0] > 100){
                            health[0] == 100;
                        }
                        if(health[0] < 1){
                            death();
                        }
						break; //uscire dallo switch
					} 
                    case 4:{
                        esci = 1;
                        break;
                    }
				}
		    	break;
		    }
		}
	}
}

int mossa(int map1[R][C], int p){

    for(r = 0; r < R; r++){
        for(c = 0; c < C; c++){
            if(map1[r][c] == 2){
                posX[0] = c;
                posY[0] = r;
            }
        }
    }
 
    getch();
	int tasto = getch();

	switch(tasto){
		case FRECCIA_SU:{
            if(map1[posY[0] - 1][posX[0]] != 1){
                if((map1[posY[0] - 1][posX[0]] < 5 || map1[posY[0] - 1][posX[0]] > 9) && map1[posY[0] - 1][posX[0]] != 20){
                    if(posY[0] > 8 && posY[0] < 92){
                        stampaY[0]--;
                    }

                    map1[posY[0]][posX[0]] = p;
                    if(map1[posY[0] - 1][posX[0]] > 9 && map1[posY[0] - 1][posX[0]] < 20){
                        trigger[0]= map1[posY[0] - 1][posX[0]];
                    }
                    posY[0]--;
                    if(map1[posY[0]][posX[0]] != 0){
                        event(map1);
                    }
                    p = map1[posY[0]][posX[0]];

                } else{
                    if(map1[posY[0] - 1][posX[0]] != 0){
                        event(map1);
                        p = map1[posY[0]][posX[0]];
                    }
                }

            }
            map1[posY[0]][posX[0]] = 2;
			break;
		}
		case FRECCIA_GIU:{
           if(map1[posY[0] + 1][posX[0]] != 1){
                if((map1[posY[0] + 1][posX[0]] < 5 || map1[posY[0] + 1][posX[0]] > 9) && map1[posY[0] + 1][posX[0]] != 20){    
                    if(posY[0] > 8 && posY[0] < 92){
                        stampaY[0]++;
                    }

                    map1[posY[0]][posX[0]] = p;
                    if(map1[posY[0] + 1][posX[0]] > 9 && map1[posY[0] + 1][posX[0]] < 20){
                        trigger[0]= map1[posY[0] - 1][posX[0]];
                    }                
                    posY[0]++;

                    if(map1[posY[0]][posX[0]] != 0){
                        event(map1);
                    }
                    p = map1[posY[0]][posX[0]];

                } else {
                    if(map1[posY[0] + 1][posX[0]] != 0){
                        event(map1);
                        p = map1[posY[0]][posX[0]];
                    }
                }
            }

            map1[posY[0]][posX[0]] = 2;
			break;
		}
		case FRECCIA_SX:{
			if(map1[posY[0]][posX[0] - 1] != 1){
                if((map1[posY[0]][posX[0] - 1] < 5 || map1[posY[0]][posX[0] - 1] > 9) && map1[posY[0]][posX[0] - 1] != 20){
                    
                    if(posX[0] > 25 && posX[0] < 92){
                        stampaX[0]--;
                    }

                    map1[posY[0]][posX[0]] = p;
                    if(map1[posY[0]][posX[0] - 1] > 9 && map1[posY[0]][posX[0] - 1] < 20){
                        trigger[0]= map1[posY[0] - 1][posX[0]];
                    }
                    posX[0]--;

                    if(map1[posY[0]][posX[0]] != 0){
                        event(map1);
                    }
                    p = map1[posY[0]][posX[0]];
                
                } else {
                    if(map1[posY[0]][posX[0] - 1] != 0){
                        event(map1);
                        p = map1[posY[0]][posX[0]];
                    }
                }
            }
            p = map1[posY[0]][posX[0]];
            map1[posY[0]][posX[0]] = 2;
			break;
		}
		case FRECCIA_DX:{
			if(map1[posY[0]][posX[0] + 1] != 1){    
                if((map1[posY[0]][posX[0] + 1] < 5 || map1[posY[0]][posX[0] + 1] > 9) && map1[posY[0]][posX[0] + 1] != 20){

                    if(posX[0] > 25 && posX[0] < 92){
                        stampaX[0]++;
                    }

                    map1[posY[0]][posX[0]] = p;
                    if(map1[posY[0]][posX[0] + 1] > 9 && map1[posY[0]][posX[0] + 1] < 20){
                        trigger[0]= map1[posY[0] - 1][posX[0]];
                    }
                    posX[0]++;

                    if(map1[posY[0]][posX[0]] != 0){
                        event(map1);
                    }
                    p = map1[posY[0]][posX[0]];

                } else {
                    if(map1[posY[0]][posX[0] + 1] != 0){
                        event(map1);
                        p = map1[posY[0]][posX[0]];
                    }
                }
            }
            map1[posY[0]][posX[0]] = 2;
           break;
		}
        case 105:{
            inventario();
        }
        default:{
            break;
        }
	}
	
	return p;
}

int title(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    printf("          # ###                                                  ###                                    # ###\n");
    printf("    /  /###  /                                 #              ###                                  /  /###\n");
    printf("   /  /  ###/                                 ###              ##          ##                     /  /  ###                                        #\n");
    printf("  /  ##   ##                                   #               ##           ##                   /  ##   ###                                      ##\n");
    printf(" /  ###                                                        ##           ##                 /  ###    ###                                     ##\n");
    printf("##   ##            /###     /###      /###   ###       /###    ##      /##         /###       ##   ##     ## ##   ####      /##       /###     ########\n");
    printf("##   ##   ###     / ###  / / ###  /  / ###  / ###     / ###  / ##     / ###       / #### /    ##   ##     ##  ##    ###  / / ###     / #### / ########\n");
    printf("##   ##  /###  / /   ###/ /   ###/  /   ###/   ##    /   ###/  ##    /   ###     ##  ###/     ##   ##     ##  ##     ###/ /   ###   ##  ###/     ##\n");
    printf("##   ## /  ###/ ##    ## ##        ##          ##   ##    ##   ##   ##    ###   ####          ##   ##     ##  ##      ## ##    ### ####          ##\n");
    printf("##   ##/    ##  ##    ## ##        ##          ##   ##    ##   ##   ########      ###         ##   ##     ##  ##      ## ########    ###         ##\n");
    printf(" ##  ##     #   ##    ## ##        ##          ##   ##    ##   ##   #######         ###        ##  ## ### ##  ##      ## #######       ###       ##\n");
    printf("  ## #      /   ##    ## ##        ##          ##   ##    ##   ##   ##                ###       ## #   ####   ##      ## ##              ###     ##\n");
    printf("   ###     /    ##    ## ###     / ###     /   ##   ##    ##   ##   ####    /    /###  ##        ###     /##  ##      /# ####    /  /###  ##     ##\n");
    printf("    ######/      ######   ######/   ######/    ### / ######    ### / ######/    / #### /          ######/ ##   ######/ ## ######/  / #### /      ##\n");
    printf("      ###         ####     #####     #####      ##/   ####      ##/   #####        ###/             ###   ##    #####   ## #####      ###/        ##\n");
    printf("                                                                                                          ##\n");
    printf("                                                                                                          /\n");
    printf("                                                                                                         /\n");
    printf("                                                                                                        /\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\n Sei una persona che si sveglia e non trova i suoi biscotti preferiti: le Gocciole Pavesi, quindi, ti imbarcherai in un'avventura per averne una scorta a vita. BASATO SU UNA STORIA VERA \n (la trama di base, il resto è tutto inventato, magari avere una scorta a vita di Gocciole...)\n");
    SetConsoleTextAttribute(hConsole, 2);
    printf("\npremi qualsiasi tasto per comininciare");
    SetConsoleTextAttribute(hConsole, 7);
    getch();
    return 0;
}

int main(){

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    health[0] = 100;
    dg[0] = 99999;
    trigger[0] = 11;
    int p = 0;

    /*
    0 = NUIE;
    1 = MURO;
    2 = GIOCATORE;
    3 = OGGETTO RANDOM;
    4 = NEMICO RANDOM;
    5 = MARIO PAVESI;
    6 = MORSHU;
    7 = MANUEL;
    8 = MAURO;
    9 = OBAMA
    10 = TRIGGER STRADA;
    11 = TRIGGER CASA MIA;
    12 = TRIGGER CASA MANUEL;
    13 = TRIGGER CASA MAURO;
    14 = TRIGGER CASA OBAMA;
    15 = TRIGGER BOTTEGA DI MORSHU;
    16 = TRIGGER STABILIMENTO PAVESI; 
    17 = TRIGGER FABBRICA GOCCIOLE;
    18 = TRIGGER STABILIMENTO BALOCCO;
    20 = FRANCESCO BALOCCO
    21 = GOCCIOLOTTO
    50 = PORTA CHIUSA
    */
	int map1[R][C] =
    {
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,3,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,3,3,3,3,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,3,0,3,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,7,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,8,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,9,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,0,0,0,0,0,0,11,11,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,12,12,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,13,13,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,14,14,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
        1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,15,15,15,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,6,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,10,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,50,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,50,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,50,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,50,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,16,16,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,4,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,3,3,3,3,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,50,50,50,50,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,17,17,17,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    };

	title();
	while(1){
		system("cls"); 
		stampaCampo(map1);
        p = mossa(map1, p);
    }

    return 0;
}

//ecco come dovrebbe andare avanti: Marco Pavesi ti chiede di andare a sconfiggere Francesco Balocco, così facendo apre le porte della fabbrica Gocciole e si scopre che i gocciolotti stanno rubanndo tutte le Gocciole per assorbirle e trasformarle in prodotti mediocri di sottomarca. Sconfiggiendo anche i gocciolotti si avrebbe vinto.