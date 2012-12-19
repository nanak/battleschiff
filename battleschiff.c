#include "battleschiff.h"
#include <stdio.h> 
#include <stdint.h>




/*
* Hier l‰uft das Spiel (und keiner weiﬂ wohin)
*/
void start (gameField g, player p1 , player p2, int schiffzahl) {
	int go,i,ii,boolean,help,h2;
	shot *temp;
	go=1;
	temp=(shot*)malloc(sizeof(shot));
	while(go){
		drawFeld(g,p1.hit,p1.shots,p1.hits,p1.noHits);
		getShot(temp);
		boolean=0;
		help=(*temp).y*g.breite+(*temp).x;
		for(i=0;i<p1.shipFields & boolean==0;i++){//Alle schiffsfelder durchgehen

			if(*(p1.orderedShips+i)==help){//Wenn Treffer entdeckt
				for(ii=0;ii<p1.hits;ii++){//In Trefferliste einordnen
					if(*(p1.orderedHits+ii)>help){
						h2=*(p1.orderedHits+ii);
						*(p1.orderedHits+ii)=help;
						help=h2;
					}
				}
				*(p1.orderedHits+p1.hits)=help;
				boolean=1;
				++p1.hits;
			}
		}
		if(boolean=0){//Wenn kein Treffer
			for(ii=0;ii<p1.hits;ii++){//In Nichttrefferliste einordnen
					if(*(p1.orderedShots+ii)>help){
						h2=*(p1.orderedShots+ii);
						*(p1.orderedShots+ii)=help;
						help=h2;
					}
				}
				*(p1.orderedShots+p1.noHits)=help;
				++p1.noHits;
		}else
			boolean=0;
		
			
		
		//P1 Schuss verarbeiten
		//P2 noch schiffe, ungetroffen?
		if(go){
			//P2 Spielfeld anzeigen
			//P2 Schuss einlesen
			//P2 Schuss verarbeiten
			//P1 noch Schiffe vorhanden?
		}
	}





	free(temp);
	free(p1.ships);
	free(p1.shots);
	free(p1.hit);
	free(p2.ships);
	free(p2.shots);
	free(p2.hit);
}


/*
* Lieﬂt alle Startwerte ein (Feldgrˆﬂe, Shiffe etc.) und ruft start auf
*/
void beginn(){
	//Variablen
	int schiffzahl,max,i,ii,iii,laenge,help,h2;
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
	p1.orderedShips = (int*) malloc(sizeof(int)*schiffzahl*laenge);
	p1.shipFields=0;
	for (i = 0;i<schiffzahl;i++){	//f¸r jedes Schiff etwas herausholen i = Anzahl der abgearbeiteten Schiffe
		drawShipFeld(*g,p1.orderedShips,i+1); //Feld zeichnen
		//laenge setzen
		(*(ship1+i)).length=laenge;
		//Schiff einlesen
		setShip(ship1+i);
		//Schiff in geordnete liste setzen
		for(ii=0;ii<laenge;ii++){//Jedes Feld des Schiffes durchgehen, ii = Position im Schiff
			help=(((*g).breite*((*(ship1+i)).y+ii)*(*(ship1+i)).richtung)+(*(ship1+i)).x);//Position des Feldes = y*breite+x
			for(iii=0;iii<p1.shipFields;iii++){//Geordnete Liste durchgehen, iii= Position in der Liste
				if(*(p1.orderedShips+iii)>help){
					h2=*(p1.orderedShips+iii);
					*(p1.orderedShips+iii)=help;
					help=h2;
				}
			}
			*(p1.orderedShips+p1.shipFields)=help;
			++p1.shipFields;
		}
	}
	
	//Spielerwechsel
	playerwechsel(&p2);
	//Setzen p2 ships
	ship2 = (ship*)malloc(sizeof(ship)*schiffzahl);
	for (i = 0;i<schiffzahl;i++){	
		drawShipFeld(*g,ship2,i+1);
		(*(ship2+i)).length=laenge;
		setShip(ship2+i);

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