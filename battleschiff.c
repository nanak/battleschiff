#include "battleschiff.h"
#include<stdio.h> 
//allgemeine Spielfeld infos
int breite = 0;
int hoehe = 0;

//player 1 variablen
int *p1_shot[];
int *p1_hit[];
int p1_ship[][];
// die z�hler
int p1_shots = 0;
int p1_hits = 0;
int p1_ships = 0;

//PLayer 2 variablen
int *p2_shot[];
int *p2_hit[];
int p2_ship[][];
// die z�hler
int p2_shots = 0;
int p2_hits = 0;
int p2_ships = 0;

void start(int breiten, int hoehen, int ships){
	breite = breiten;
	hoehe = hoehen;
	p1_ship[ships][4];
	p2_ship[ships][4];
	//Todo: Schiffesetzeneingabe aufrufen
	//p1_ship[i][0]=(return & 255);
	//p1_ship[i][1]=(return >>= 9);
	//p1_ship[i][2]=(return & 255)+(~ return & 256)*length;
	//p1_ship[i][3]=(return >>= 9)+(~ return & 256)*length;
	//usw.

	bool go = true;
	while(go){
		//P1 Spielfeld anzeigen
		//P1 Schuss einlesen
		//P1 Schuss verarbeiten
		//P2 noch schiffe, ungetroffen?
		if(go){
			//P2 Spielfeld anzeigen
			//P2 Schuss einlesen
			//P2 Schuss verarbeiten
			//P1 noch Schiffe vorhanden?
		}
	}

}

void save (){

}

void load ( char[] ){

}