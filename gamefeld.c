#include "gamefeld.h"
#include<stdio.h> 

//allgemeine Spielfeld infos
int breite = 0;
int hoehe = 0;

//player 1 variablen
int *p1_schoot[];
int *p1_hit[];
int *p1_schiffe[];
// die zähler
int p1_schootz = 0;
int p1_hitz = 0;
int p1_schiffez = 0;

//PLayer 2 variablen
int *p2_schoot[];
int *p2_hit[];
int *p2_schiffe[];
// die zähler
int p2_schootz = 0;
int p2_hitz = 0;
int p2_schiffez = 0;

void initFeld(int breiten, int hoehen){
	breite = breiten;
	hoehe = hoehen;
}
// TODO schiffsspeicherung wie? 1. element start 2. element ende oda was)
void addship(int player, int xkors, int ykors, int xkore, int ykore){
	if(player == 1){
		
		int posis = (ykors-1)*breite+xkors;
		int posie = (ykore-1)*breite+xkore;
		*(p1_schiffe+p1_schiffez) = posis;
		*(p1_schiffe+p1_schiffez+1) = posie;

		p1_schiffez +=2;
	}else {

	}

}