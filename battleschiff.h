#ifndef battleschiff_H
#define battleschiff_H
/*
In battleschiff kommt der allgemeine ablauf des spieles sowie die funktionalit�t
*/
//Allgemein spielfeld infos
extern int breite;
extern int hoehe;
//Player 1 informationen
extern int *p1_shot[];
extern int *p1_hit[];
extern int p1_ship[];
//die z�hler
extern int p1_shots;
extern int p1_hits;
extern int p1_ships;

//Player 2 informationen
extern int *p2_shot[];
extern int *p2_hit[];
extern int p2_ship[];
//die z�hler
extern int p2_shots;
extern int p2_hits;
extern int p2_ships;

void initFeld(int , int);//festlegen der spielfeldgr��e(breite , h�he)
void shoot(int , int);//schie�en (x,y kordi)
void addShip(int, int, int, int,int);//ein schiff hinzuf�gen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genFeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
void save();
void load(char[]);
// weitere funktionen fals notwendig


void start();//startet das spiel
//weiter funktioen falls notwendig


#endif /* battleschiff_H */