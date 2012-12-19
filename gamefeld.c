#include "battleschiff.h"
#include <stdio.h> 

//TODO battleschiff.h Aktualisieren

void welcomeScreen(){
	printf("Willkomen zu Battleschiff\nvon\nDominik Backhausen\nNanak Tattyrek\nThomas Traxler\n\n Zum Spielstart s eingeben\n");
}


void setShip (ship* s){
	printf("Es wird ein Schiff mit %i Feldern gesetzt \n",&(*s).length);
	printf("Bitte die x Kordinaten als Zahl eingeben: ");
	scanf("%i",&(*s).x);
	printf("Bitte die y Kordinaten als Zahl eingeben: ");
	scanf("%i",&(*s).y);
	printf("Bitte eine 0 für eine Vertikale ausrichtung\noder eine 1 für eine Horizontale ausrichtung eingeben: ");
	scanf("%d",&(*s).richtung);
}


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


int getShipNumber(int max){
	int re = 0;
	printf("Bitte die anzahl der Schiffe pro Spieler eingeben (Maximal erlaubt: %d)\n",max);
	scanf_s("%i",&re);
	if(re > max | re <= 0) re = max;
	return re;
}


void getGameField(gameField* g){
	printf("Bitte die Breite für das Spielfeld eingeben: ");
	scanf("%d",&(*g).breite);
	printf("\nBitte die Höhe für das Spielfeld eingeben: ");
	scanf("%i",&(*g).hoehe);
	//printf("\n");

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

				}else if((*(ships+indexs)).richtung == 1){
					if((*(ships+indexs)).x+news == ind && (*(ships+indexs)).y == i){
						printf(" $ |");
						news ++;
						if(news >= ((*(ships+indexs)).length)-1){
							indexs++;
							news = 0;
						}
					}

				}else if((*(ships+indexs)).richtung == 0){
					if((*(ships+indexs)).x == ind && (*(ships+indexs)).y+news == i){
						printf(" $ |");
						news ++;
						if(news >= ((*(ships+indexs)).length)-1){
							indexs++;
							news = 0;
						}
					}
				
				}else 
					printf(" _ |");
			}else 
				printf(" _ |");

		}
		printf("\n");
	}
}


void drawShipFeld(gameField g,ship* ships,int schiffe){
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
				if((*(ships+indexs)).richtung == 1){
					if((*(ships+indexs)).x+news == ind && (*(ships+indexs)).y == i){
						printf(" $ |");
						news ++;
						if(news >= ((*(ships+indexs)).length)-1){
							indexs++;
							news = 0;
						}
					}

				}else if((*(ships+indexs)).richtung == 0){
					if((*(ships+indexs)).x == ind && (*(ships+indexs)).y+news == i){
						printf(" $ |");
						news ++;
						if(news >= ((*(ships+indexs)).length)-1){
							indexs++;
							news = 0;
						}
					}
				
				}else 
					printf(" _ |");
			}else 
				printf(" _ |");

		}
		printf("\n");
	}
}
