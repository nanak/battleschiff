#include<stdio.h>
#include "battleschiff.h"


int main(){
	char test[30];

	welcomeScreen();
	scanf("%s",&test);
	if(test[0] == 's')
		beginn();
	/*
	else if(test[0] == 'l'){
		scanf("%s",&test);
		load(*test);
	}
	*/
}
