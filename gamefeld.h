#ifndef gamefeld_h
#define gamefeld_h
/*
In gamefeld sthen nur ide informationen von dem spielfeld hier werden die schiffe gesetzt die schüsse eingetragen und asgeführt 
*/
//Allgemein spielfeld infos
extern int breite;
extern int hoehe;
//Player 1 informationen
extern int *p1_schoot[];
extern int *p1_hit[];
extern int *p1_schiffe[];
//die zähler
extern int p1_schootz;
extern int p1_hitz;
extern int p1_schiffez;

//Player 2 informationen
extern int *p2_schoot[];
extern int *p2_hit[];
extern int *p2_schiffe[];
//die zähler
extern int p2_schootz;
extern int p2_hitz;
extern int p2_schiffez;

void initFeld(int , int);//festlegen der spielfeldgröße(breite , höhe)
void schoot(int , int);//schießen (x,y kordi)
void addship(int, int, int, int,int);//ein schiff hinzufügen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genfeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
// weitere funktionen fals notwendig


#endif /* battleschiff_H */