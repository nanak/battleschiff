#include<stdio.h>
#include<stdlib.h>
#include "battleschiff.h"


int main(){
	char test[30];
	int score[4];//Spieler 1 Schüsse, Spieler 1 Treffer, Spieler 2 Schüsse, Spieler 2 Treffer
	gameField g;
	shot *p1hit;
	shot *p1nohit;
	ship *p1ships;

	welcomeScreen();

	
	g.hoehe = 5;
	g.breite = 5;

	
	p1hit = (shot*)malloc(sizeof(shot)*4);
	(*p1hit).x = 1;
	(*p1hit).y = 2;
	p1hit++;
	(*p1hit).x = 3;
	(*p1hit).y = 5;
	p1hit--;

	

	p1nohit = (shot*)malloc(sizeof(shot)*4);
	(*p1nohit).x = 4;
	(*p1nohit).y = 1;
	p1nohit++;
	(*p1nohit).x = 2;
	(*p1nohit).y = 4;
	p1nohit--;
	
	p1ships = (ship*)malloc(sizeof(ship)*4);

	drawFeld(g,p1hit,p1nohit,2,2,p1hit,p1nohit,p1ships);


	playerwechsel();
	scanf("%s",&test);
	//load möglichkeit
	//Eingabe, Spielfeldgröße & Schiffmenge
	//score = start(param);
	//if score = -1, abspeichern
	//Todo: name
	//saveScore(score, name);
	return 1;
}
