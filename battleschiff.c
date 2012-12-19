#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>
#define bool int



/*
* Hier läuft das Spiel (und keiner weiß wohin)
*/
void start (gameField g, player p1 , player p2) {
	//p1_ship[ships];
	//p2_ship[ships];
	//Todo: Schiffesetzeneingabe in Schleife aufrufen
	//p1_ship[i][0]=(return & 255);
	//p1_ship[i][1]=(return >>= 9);
	//p1_ship[i][2]=(return & 255)+(~ return & 256)*length;
	//p1_ship[i][3]=(return >>= 9)+(~ return & 256)*length;
	//usw.

//	bool go = 1;
//	while(go){
		//P1 Spielfeld anzeigen
		//P1 Schuss einlesen
		//P1 Schuss verarbeiten
		//P2 noch schiffe, ungetroffen?
//		if(go){
			//P2 Spielfeld anzeigen
			//P2 Schuss einlesen
			//P2 Schuss verarbeiten
			//P1 noch Schiffe vorhanden?
//		}
	//}






}


/*
* Ließt alle Startwerte ein (Feldgröße, Shiffe etc.) und ruft start auf
*/
void beginn(){
	int (schiffzahl),max,i;
	gameField* g;
	player p1,p2;
	ship* ship1, ship2;
	g=(gameField*)malloc(sizeof(gameField));
	getGameField(g);
	max = (((*g).breite)/3)+1;
	if (max > ((*g).hoehe)/3+1)
		max = ((*g).hoehe)/3+1;
	schiffzahl = getShipNumber(max);
	ship1 = (ship*)malloc(sizeof(ship)*schiffzahl);
	for (i = 0;i<schiffzahl;i++){
		(*ship1).length=schiffzahl;
		setShip(ship1);
		ship1++;
	}
	scanf(" %d ",&i);
}
/*
* Speichert das ganze spiel ab
*/
void save (){

}
/*
* Lädt das Spiel und startet die start
*/
//void load (char[]){

//}