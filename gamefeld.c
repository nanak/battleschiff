#include "battleschiff.h"
#include <stdio.h> 

//TODO battleschiff.h Aktualisieren

/*
Gibt die Willkommens Nachricht aus
*/
void welcomeScreen(){
	printf("Willkomen zu Battleschiff\nvon\nDominik Backhausen\nNanak Tattyrek\nThomas Traxler\n\n Zum Spielstart s eingeben\n");
}

/*
Diese Methode last den spieler eines seiner Schiffe setzen
der spieler kann aber nicht die länge des schiffes angeben
*/
void setShip (ship* s){
	printf("Es wird ein Schiff mit %i Feldern gesetzt \n",&(*s).length);
	printf("Bitte die x Kordinaten als Zahl eingeben: ");
	scanf("%i",&(*s).x);
	printf("Bitte die y Kordinaten als Zahl eingeben: ");
	scanf("%i",&(*s).y);
	printf("Bitte eine 0 für eine Vertikale ausrichtung\noder eine 1 für eine Horizontale ausrichtung eingeben: ");
	scanf("%d",&(*s).richtung);
}

/*
Diese Methode wechselt den Spieler und gibt aus welcher spieler jetzt an der reihe ist
*/
void playerwechsel(player* p){
    int i;
    for(i = 0; i < 1024; ++i)
        printf("\n");
//    #ifdef LINUX
//    system("clear");
//    #elif defined(WIN32)
//    system("cls");
//    #endif

    printf("Spieler %s ist am Zug.\n", (*p).name);
}

/*
 * Liest Koordinaten fuer Schuesse ein
 */
void getShot(shot* e){
	printf("Nun bitte die Kordinaten für den nächsten Schuss eingeben!");
	printf("\nBitte die x Kordinaten als Zahl eingeben: ");
	scanf("%d",&(*e).x);
	printf("\nBitte die y Kordinaten als Zahl eingeben: ");
	scanf("%d",&(*e).y);
	printf("\n");
}

/*
Liest die maximale anzahl an schiffen ein
*/
int getShipNumber(int max){
	int re = 0;
	printf("Bitte die anzahl der Schiffe pro Spieler eingeben (Maximal erlaubt: %d)\n",max);
	scanf_s("%i",&re);
	if(re > max | re <= 0) re = max;
	return re;
}

/*
liest die größe des spielfelds ein
*/
void getGameField(gameField* g){
	printf("Bitte die Breite für das Spielfeld eingeben: ");
	scanf("%d",&(*g).breite);
	printf("\nBitte die Höhe für das Spielfeld eingeben: ");
	scanf("%i",&(*g).hoehe);
	//printf("\n");

}

/*
Liest den Namen eines spielers ein
*/
char* getName(char spieler[]){
	char re[40];
	printf("Bitte den Namen von %s eingeben: ",spieler);
	scanf("%s",re);
	printf("\n");
	return re;
}

/*
Zeichnet ein spielfeld mit den von dir abgegebenen schüsse
*/
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
			if(indexh < aHits | indexnh < aNoHits ){
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

/*
Zeichnet das eigene Feld mit den eigenen schiffen und den schüssen vom gegner die aus die eigenen schiffe abgegben wurden
*/
void drawOwnFeld(gameField g,shot *aphit,shot *apnohit, ship *ships, int aHits, int aNoHits,int schiffe){
	int indexnh = 0 , indexh = 0, indexs = 0;
	int iii,i ,ind, news = 0;
	printf(" _ |");
	for(iii = 0; iii < g.breite;iii++){
		printf(" %d |",iii+1);
	}
	printf("\n");
	
	for(i = 1 ; i<= g.hoehe ; i++){
		printf(" %d |",i);
		for(ind = 1 ; ind<= g.breite ; ind++){
			if(indexh < aHits | indexnh < aNoHits | indexs < schiffe){
				if((*(aphit+indexh)).x == ind && (*(aphit+indexh)).y == i){
					printf(" X |");
					++indexh;
				} else if ((*(apnohit+indexnh)).x == ind && (*(apnohit+indexnh)).y == i){
					printf(" O |");
					++indexnh;

				}else if(ind<=(*ships).x*(*ships).length&ind>=(*ships).x*(*ships).length && i<=(*ships).y*abs((*ships).length-1) && i<=(*ships).y*abs((*ships).length-1)){
					printf(" $ |");
				}else 
					printf(" _ |");
			}else 
				printf(" _ |");

		}
		printf("\n");
	}
}


void drawShipFeld(gameField g,int* orderedShips,int schiffe){
	int indexnh = 0 , indexh = 0, indexs = 0;
	int iii,i ,ind, news = 0;
	printf(" _ |");
	for(iii = 0; iii < g.breite;iii++){
		printf(" %d |",iii+1);
	}
	printf("\n");
	
	for(i = 1 ; i<= g.hoehe ; i++){
		printf(" %d |",i);
		for(ind = 1 ; ind<= g.breite ; ind++){
			if(indexs < schiffe){
				if(*(orderedShips+indexs)=(i-1)*g.breite+ind){
					printf(" $ |");
					++indexs;
				}else 
					printf(" _ |");
			}else 
				printf(" _ |");

		}
		printf("\n");
	}
}
