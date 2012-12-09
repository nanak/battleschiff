#include "gamefeld.h"
#include<stdio.h> 



void welcomeScreen(){
	printf("Battleschiff von Dominik Backhausen, Nanak Tattyrek und Thomas Traxler \nBitte neu fuer ein neues Spiel eingeben! \n");
}

int setShip (){
	int x=0, int y=0, int richtung = 0;
	//Todo: x,y füllen ... Einlesen von position und richtung
	//Richtung Horizontal = 0, vertikal = 1
	return (x | (y<<9))|(richtung << 8);
}