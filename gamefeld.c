#include "gamefeld.h"
#include<stdio.h> 

//allgemeine Spielfeld infos
int breite = 0;
int hoehe = 0;

//player 1 variablen
int *p1_schoot[];
int *p1_hit[];
int *p1_schiffe[];
//PLayer 2 variablen
int *p2_schoot[];
int *p2_hit[];
int *p2_schiffe[];

void initFeld(int breiten, int hoehen){
	breite = breiten;
	hoehe = hoehen;
}

void addship(int player, int xkors, int ykors, int xkorn, int ykorn){

}