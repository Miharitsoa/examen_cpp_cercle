#include <iostream>
#include <cstring>
#include <cmath>
#include"Cercle.h"

using namespace std;

Cercle::Cercle(){}

void Cercle::setCentreCercle(int abs,int ord){
	O.setCentre(abs,ord);
}

void Cercle::setAutreCritere(int r,string color){
	rayon=r;
	couleur=color;
}

Centre Cercle::getCentreCercle(){
	return O;
}

int Cercle::getRayon(){
	return rayon;
}

bool Cercle::seCoupent(Cercle c2){
	double distanceCentre=sqrt(pow(c2.O.getAbs(),2)+pow(O.getOrd(),2));
	return distanceCentre < getRayon()+c2.getRayon();
}

string Cercle::getCouleur(){
	return couleur;
}

void Cercle::descriptionCercle(){
	cout<<"Cercle de centre d'abscisse "<< O.getAbs() <<" et d'ordonnee "<< O.getOrd() <<", de rayon "<< rayon <<" et de couleur "<< couleur <<endl;   
}

void Cercle::descriptionCercle(Cercle c){
	cout<<"Cercle de centre d'abscisse "<< c.O.getAbs() <<" et d'ordonnee "<< c.O.getOrd() <<", de rayon "<< c.rayon <<" et de couleur "<< c.couleur <<endl;   
}

Cercle::~Cercle(){}


