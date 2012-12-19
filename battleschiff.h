#ifndef battleschiff_H
#define battleschiff_H
#include<stdlib.h>
/*
In battleschiff kommt der allgemeine ablauf des spieles sowie die funktionalität
*/

/*
gameFieldStruct speichert die größe des Spielfeld
*/
typedef struct gameFieldStruct
{
	int breite;
	int hoehe;
}gameField;

/*
shotStruct speichert die abgegebenen schüsse
*/
typedef struct shotStruct
{
	short x;
	short y;
}shot;
/*
shipStruct speichert die angabe der schiffe 
sowie die anzahl die das schiff schon erhaltet hat
und ob das schiff schon zerstört wurde
*/
typedef struct shipStruct{
	int x;
	int y;
	int length;
	int hits;
	int richtung;
	int destroyed;
}ship;
/*
playerStruct speichert den namen des spielers
sowie sie abgegeben schüsse unterteilt in treffer an gegnerischen schiffen und treffer ins wasser
es werden auch die eigenen schiffe gespeichert und die anzahl an abgegebenen schüsse wieder unterteilt intreffer und nichttreffer
*/
typedef struct playerStruct
{
	char* name;
	shot* shots;
	shot* hit;
	ship* ships;
	int hits;
	int noHits;
	int* orderedShots;
	int* orderedHits;
	int* orderedShips;
	int shipFields;
}player;

//Battleschiff methoden
void start(gameField g, player p1 , player p2, int shiffzahl);//startet das spiel
void beginn();//richtet das spiel ein
void save ();//speichert das spiel ab
void load(char);//laded ein spiel
//weiter funktioen falls notwendig


//Gamefeld methoden
void welcomeScreen();// gibt den welcomescreen aus
void setShip(ship*);//1 schiff setzen
void playerwechsel(char*);//wechselt den spieler
void getShot(shot*);//liest einen schuss ein
int getShipNumber(int);//eingabe der schiffsanzahl im spiel (max wert berechnen)
void getGameField(gameField*);//gibst du ein wie groß spielfeld sein kann
char* getName(char[]);//liest den spielernamen von einem spieler ein
void drawFeld(gameField, shot *, shot *,int , int);//zeichnet spielfeld(feld,aphit,apnohit,gphit,gpnohit,apships)
void drawOwnFeld(gameField,shot*,shot*, ship*, int, int,int);// zeichnet das eigene spielfeld mit schiffen und schüssen vom gegner
void drawShipFeld(gameField,int*,int);//zeichnet die eigene schiffsaufstelleung

#endif /* battleschiff_H */