#include<stdio.h> 


int main(){
	char *test[]={"red","green"};

	char ca [20];
	printf("Battleschiff von Dominik Backhausen, Nanak Tattyrek und Thomas Traxler \nBitte neu fuer ein neues Spiel eingeben! \n");
	scanf("%s",ca);
	printf("%s",ca);
	printf("\n");
	printf("%s",*(test+1));
	printf("\n");
	scanf("%s",*(test+2));
	printf("%s",*(test+2));
}  

