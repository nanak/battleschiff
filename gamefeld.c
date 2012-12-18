#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>

//Todo: battleschiff.h Aktualisieren

void welcomeScreen(){
	printf("Willkomen zu Battleschiff\nvon\nDominik Backhausen\nNanak Tattyrek\nThomas Traxler\n");
}
void setShip (ship s){
	printf("Es wird ein Schiff mit %d Feldern gesetzt \n",s.length);
	scanf("Bitte die x Kordinaten als Zahl eingeben: %d \n",s.x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %d \n",s.y);
	scanf("Bitte eine 0 für eine Vertikale ausrichtung\noder eine 1 für eine Horizontale ausrichtung eingeben: %d \n",s.richtung);
}
void playerwechsel(){
	//TODO NANAK
}
void getShot(shot e){
	printf("Nun bitte die Kordinaten für den nächsten Schuss eingeben!");
	scanf("Bitte die x Kordinaten als Zahl eingeben: %d \n",e.x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %d \n",e.y);
}
int getShipNumber(int max){
	int re = 0;
	printf("Bitte die anzahl der Schiffe pro Spieler eingeben (Maximal erlaubt: %d)\n",max);
	scanf("%d \n",re);
	return re;
}
void getFeldSize(gameField g){
	scanf("Bitte die Breite für das Spielfeld eingeben: %d \n",g.breite);
	scanf("Bitte die Höhe für das Spielfeld eingeben: %d \n",g.hoehe);
}
void drawFeld(gameField g,shot aphit[],shot apnohit[],shot gphit[],shot gpnohit[], ship apships[]){
	int indexnh = 0 , indexh = 0; 
	int iii,i ,ind;
	printf(" _ |");
	for(iii = 0; iii < g.breite;iii++){
		printf(" %d |",iii+1);
	}
	printf("\n");

	for(i = 1 ; i<= g.hoehe ; i++){
		printf(" %d |",i+1);
		for(ind = 1 ; ind<= g.breite ; ind++){

			if(i == aphit[indexh].y && ind == aphit[indexh].x){
				printf(" X |");
				indexh ++;
			}else if(i == apnohit[indexnh].y && ind == apnohit[indexnh].x){
				printf(" O |");
				indexnh ++;
			}else{
				printf(" _ |");
			}


		}
		printf("\n");
	}
}





//int32_t setShip (int ShipÖLength){
	//int32_t x=0, y=0, richtung = 0;
	//Todo: x,y füllen ... Einlesen von position und richtung
	//Richtung Horizontal = 0, vertikal = 1
	//return (x | (y<<9))|(richtung << 8);
//}