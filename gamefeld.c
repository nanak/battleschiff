#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>

//Todo: battleschiff.h Aktualisieren

void welcomeScreen(){
	printf("Willkomen zu Battleschiff\nvon\nDominik Backhausen\nNanak Tattyrek\nThomas Traxler\n");
}
void setShip (ship s){
	printf ("Es wird ein Schiff mit %i Feldern gesetzt \n",s.length);
	scanf("Bitte die x Kordinaten als Zahl eingeben: %i \n",s.x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %i \n",s.y);
	scanf("Bitte eine 0 für eine Vertikale ausrichtung\noder eine 1 für eine Horizontale ausrichtung eingeben: %i \n",s.richtung);
}
void playerwechsel(){
	//TODO NANAK
}
void getShot(shot e){
	printf("Nun bitte die Kordinaten für den nächsten Schuss eingeben!");
	scanf("Bitte die x Kordinaten als Zahl eingeben: %i \n",e.x);
	scanf("Bitte die y Kordinaten als Zahl eingeben: %i \n",e.y);
}
int getShipNumber(int max){
	int re = 0;
	printf("Bitte die anzahl der Schiffe pro Spieler eingeben (Maximal erlaubt: %i)\n",max);
	scanf("%i \n",re);
	return re;
}
void getFeldSize(gameField g){
	scanf("Bitte die Breite für das Spielfeld eingeben: %i \n",g.breite);
	scanf("Bitte die Höhe für das Spielfeld eingeben: %i \n",g.hoehe);
}
void drawFeld(gameField g,shot hit,shot nohit){

}





//int32_t setShip (int ShipÖLength){
	//int32_t x=0, y=0, richtung = 0;
	//Todo: x,y füllen ... Einlesen von position und richtung
	//Richtung Horizontal = 0, vertikal = 1
	//return (x | (y<<9))|(richtung << 8);
//}