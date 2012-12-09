#include "gamefeld.h"
#include<stdio.h> 

//allgemeine Spielfeld infos
int breite = 0;
int hoehe = 0;

//player 1 variablen
int *p1_shot[];
int *p1_hit[];
int *p1_ship[];
// die zähler
int p1_shots = 0;
int p1_hits = 0;
int p1_ships = 0;

//PLayer 2 variablen
int *p2_shot[];
int *p2_hit[];
int *p2_ship[];
// die zähler
int p2_shots = 0;
int p2_hits = 0;
int p2_ships = 0;

void initFeld(int breiten, int hoehen){
	breite = breiten;
	hoehe = hoehen;
}
// TODO schiffsspeicherung wie? 1. element start 2. element ende oda was)
void addship(int player, int xkorS, int ykorS, int xkorE, int ykorE){
	if(player == 1){
		
		int posS = (ykorS-1)*breite+xkorS;
		int posE = (ykorE-1)*breite+xkorE;
		*(p1_ship+p1_ships) = posS;
		*(p1_ship+p1_ships+1) = posE;

		p1_ships +=2;
	}else {

	}

}
