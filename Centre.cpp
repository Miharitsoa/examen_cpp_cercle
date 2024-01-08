#include"Centre.h"
#include <iostream>

Centre::Centre(){}

void Centre::setCentre(int abs,int ord){
	abscisse=abs;
	ordonnee=ord;
}

int Centre::getAbs(){
	return abscisse;
}

int Centre::getOrd(){
	return ordonnee;
}

Centre::~Centre(){}



