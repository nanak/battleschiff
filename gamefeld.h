#ifndef gamefeld_h
#define gamefeld_h
/*
In gamefeld sthen nur ide informationen von dem spielfeld hier werden die schiffe gesetzt die schüsse eingetragen und asgeführt 
*/
//Allgemein spielfeld infos
extern int breite;
extern int hoehe;
//Player 1 informationen
extern int *p1_shot[];
extern int *p1_hit[];
extern int *p1_ship[];
//die zähler
extern int p1_shots;
extern int p1_hits;
extern int p1_ships;

//Player 2 informationen
extern int *p2_shot[];
extern int *p2_hit[];
extern int *p2_ship[];
//die zähler
extern int p2_shots;
extern int p2_hits;
extern int p2_ships;

void initFeld(int , int);//festlegen der spielfeldgröße(breite , höhe)
void shoot(int , int);//schießen (x,y kordi)
void addShip(int, int, int, int,int);//ein schiff hinzufügen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genFeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
// weitere funktionen fals notwendig


#endif /* battleschiff_H */
