#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>




/*
* Hier l‰uft das Spiel (und keiner weiﬂ wohin)
*/
void start (gameField g, player p1 , player p2, int schiffzahl) {
	int go,hits1,hits2,noHits1,noHits2,i,boolean;
	shot *temp;
	go=1;

	while(go){
		drawFeld(g,p1.hit,p1.shots,hits1,noHits1);
		getShot(temp);
		boolean=0;
		for(i=0;i<schiffzahl & boolean==0;i++){
			p2.ships+=i;
			if((*temp).x<=(*p2.ships).x*(*p2.ships).length&(*temp).x>=(*p2.ships).x*(*p2.ships).length&(*temp).y<=(*p2.ships).y*abs((*p2.ships).length-1)&(*temp).y<=(*p2.ships).y*abs((*p2.ships).length-1)){

			}
			
		}
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


/*
* Lieﬂt alle Startwerte ein (Feldgrˆﬂe, Shiffe etc.) und ruft start auf
*/
void beginn(){
	//Variablen
	int schiffzahl,max,i,laenge;
	gameField* g;
	player p1,p2;
	ship *ship1, *ship2;

	g=(gameField*)malloc(sizeof(gameField));
	//Spielfeld einlesen
	getGameField(g);
	//Maximale Schiffzahl
	//TODO: Verbessern, Workaround for testing
	max = (((*g).breite)/3)+1;
	if (max > ((*g).hoehe)/3+1)
		max = ((*g).hoehe)/3+1;
	//Einlesen, tats‰chliche Schiffzahl
	schiffzahl = getShipNumber(max);

	//Einlesen Spielernamen
	p1.name = getName("Player 1");
	p2.name = getName("Player 2");

	//Maximale L‰nge
	//TODO: Verbessern, Workaround for testing
	laenge = 3;

	//Setzen p1 ships
	ship1 = (ship*)malloc(sizeof(ship)*schiffzahl);
	for (i = 0;i<schiffzahl;i++){	
		drawShipFeld(g,ship1,i+1); 
		ship1 += i;
		(*ship1).length=laenge;
		setShip(ship1);
		ship1 -= i;
	}
	//Spielerwechsel
	playerwechsel(&p2);
	//Setzen p2 ships
	ship2 = (ship*)malloc(sizeof(ship)*schiffzahl);
	for (i = 0;i<schiffzahl;i++){	
		drawShipFeld(g,ship2,i+1);
		ship2 += i;
		(*ship1).length=laenge;
		setShip(ship2);
		ship2 -= i;
	}
	//‹bernehmen der Werte f¸r die Spieler
	p1.shots = (shot*) malloc(sizeof(shot)*(*g).breite*(*g).hoehe);
	p2.shots = (shot*) malloc(sizeof(shot)*(*g).breite*(*g).hoehe);
	p1.hit = (shot*) malloc(sizeof(shot)*schiffzahl*laenge);
	p2.hit = (shot*) malloc(sizeof(shot)*schiffzahl*laenge);
	p1.ships = ship1;
	p2.ships = ship2;
	p1.hits=0;
	p2.hits=0;
	p1.noHits=0;
	p2.noHits=0;
	//Starten des wirklichen Spiels und freigeben nicht mehr benˆtigter Speicher
	start(*g,p1,p2,schiffzahl);
	free(g);
}
/*
* Speichert das ganze spiel ab
*/
void save (){

}
/*
* L‰dt das Spiel und startet die start
*/
//void load (char[]){

//}