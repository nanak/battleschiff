#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>

//TODO battleschiff.h Aktualisieren

void welcomeScreen(){
	printf("Willkomen zu Battleschiff\nvon\nDominik Backhausen\nNanak Tattyrek\nThomas Traxler\n\n Zum Spielstart s eingeben");
}


void setShip (ship* s){
	printf("Es wird ein Schiff mit %d Feldern gesetzt \n",(*s).length);
	scanf("Bitte die x Kordinaten als Zahl eingeben: %d \n",(*s).x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %d \n",(*s).y);
	scanf("Bitte eine 0 für eine Vertikale ausrichtung\noder eine 1 für eine Horizontale ausrichtung eingeben: %d \n",(*s).richtung);
}


void playerwechsel(){
    //for(register int i = 0; i < 100; ++i)
    //    printf("\n");
    #ifdef LINUX
    system("clear");
    #elif defined(WIN)
    system("cls");
    #endif

    printf("Spieler %s ist am Zug.\n", "XY");
}


void getShot(shot* e){
	printf("Nun bitte die Kordinaten für den nächsten Schuss eingeben!");
	scanf("Bitte die x Kordinaten als Zahl eingeben: %d \n",(*e).x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %d \n",(*e).y);
}


int getShipNumber(int max){
	int re = 0;
	printf("Bitte die anzahl der Schiffe pro Spieler eingeben (Maximal erlaubt: %d)\n",max);
	scanf("%d \n",re);
	if(re > max | re <= 0) re = max;
	return re;
}


void getGameField(gameField* g){
	scanf("Bitte die Breite für das Spielfeld eingeben: %d \n",(*g).breite);
	scanf("Bitte die Höhe für das Spielfeld eingeben: %d \n",(*g).hoehe);

}


void drawFeld(gameField g,shot *aphit,shot *apnohit, int aHits, int aNoHits){
	int indexnh = 0 , indexh = 0; 
	int iii,i ,ind;
	printf(" _ |");
	for(iii = 0; iii < g.breite;iii++){
		printf(" %d |",iii+1);
	}
	printf("\n");
	
	for(i = 1 ; i<= g.hoehe ; i++){
		printf(" %d |",i);
		for(ind = 1 ; ind<= g.breite ; ind++){
			if(indexh < aHits){
				if((*(aphit+indexh)).x == ind && (*(aphit+indexh)).y == i){
					printf(" X |");
					++indexh;
				} else if ((*(apnohit+indexnh)).x == ind && (*(apnohit+indexnh)).y == i){
					printf(" O |");
					++indexnh;
				} else 
					printf(" _ |");
			}else 
				printf(" _ |");

		}
		printf("\n");
	}
}
void drawOwnFeld(gameField g,shot *aphit,shot *apnohit, ship *ships, int aHits, int aNoHits,int shiffe){

}



