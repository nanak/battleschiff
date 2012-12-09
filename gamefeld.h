#ifndef gamefeld_h
#define gamefeld_h
/*
In gamefeld sthen nur ide informationen von dem spielfeld hier werden die schiffe gesetzt die sch�sse eingetragen und asgef�hrt 
*/
//Allgemein spielfeld infos
extern int breite;
extern int hoehe;
//Player 1 informationen
extern int *p1_schoot[];
extern int *p1_hit[];
extern int *p1_schiffe[];
//die z�hler
extern int p1_schootz;
extern int p1_hitz;
extern int p1_schiffez;

//Player 2 informationen
extern int *p2_schoot[];
extern int *p2_hit[];
extern int *p2_schiffe[];
//die z�hler
extern int p2_schootz;
extern int p2_hitz;
extern int p2_schiffez;

void initFeld(int , int);//festlegen der spielfeldgr��e(breite , h�he)
void schoot(int , int);//schie�en (x,y kordi)
void addship(int, int, int, int,int);//ein schiff hinzuf�gen (spieler,x kor start , y kor start, x kor end, y kor end) 
void genfeld(int);// gibt das aktuelle spielfeld aus sicht eines spielers aus (player)
// weitere funktionen fals notwendig


#endif /* battleschiff_H */