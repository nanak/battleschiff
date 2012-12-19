#ifndef battleschiff_H
#define battleschiff_H
#include<stdlib.h>
/*
In battleschiff kommt der allgemeine ablauf des spieles sowie die funktionalität
*/
typedef struct gameFieldStruct
{
	int breite;
	int hoehe;
}gameField;

typedef struct shotStruct
{
	short x;
	short y;
}shot;

typedef struct shipStruct{
	int x;
	int y;
	int length;
	int hits;
	int richtung;
	int destroyed;
}ship;

typedef struct playerStruct
{
	char name;
	shot* shots;
	shot* hit;
	ship* ships;
}player;

/*
Funktionenvorschlag
void initFeld(int , int);//festlegen der spielfeldgröße(breite , höhe)
void shoot(int , int);//schießen (x,y kordi)
void addShip(int, int, int, int,int);//ein schiff hinzufügen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genFeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
void save();
void load(char[]);
// weitere funktionen fals notwendig
*/

void start(gameField g, player p1 , player p2);//startet das spiel
void beginn();
void save ();
void load(char);
//weiter funktioen falls notwendig


//Gamefeld methoden
void welcomeScreen();// gibt den welcomescreen aus
void setShip(ship*);//1 schiff setzen
void playerwechsel(player*);//wechselt den spieler
void getShot(shot*);//liest einen schuss ein
int getShipNumber(int);//eingabe der schiffsanzahl im spiel (max wert berechnen)
void getGameField(gameField*);//gibst du ein wie groß spielfeld sein kann
void drawFeld(gameField, shot *, shot *,int , int);//zeichnet spielfeld(feld,aphit,apnohit,gphit,gpnohit,apships)
void drawOwnFeld(gameField,shot*,shot*, ship*, int, int,int);
void drawShipFeld(gameField,ship*,int);

#endif /* battleschiff_H */