#ifndef battleschiff_H
#define battleschiff_H
/*
In battleschiff kommt der allgemeine ablauf des spieles sowie die funktionalit�t
*/


void initFeld(int , int);//festlegen der spielfeldgr��e(breite , h�he)
void shoot(int , int);//schie�en (x,y kordi)
void addShip(int, int, int, int,int);//ein schiff hinzuf�gen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genFeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
void save();
void load(char[]);
// weitere funktionen fals notwendig


void start(gameField g, player p1 , player p2);//startet das spiel
//weiter funktioen falls notwendig


#endif /* battleschiff_H */