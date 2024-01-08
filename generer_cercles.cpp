#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Centre.h"
#include "Cercle.h"
using namespace std;

int main(){
	srand(time(0));
	int nb_cercle=rand()%6+2;
	Cercle*cercles=new Cercle[nb_cercle];
	string color[]={"violet","bleu","jaune","orange","rouge","noir","blanc","marron","gris","beige"};
	cout<<"-------------------------------------"<<endl;
	cout<<"Generation aleatoire des cercles ..."<<endl;
	cout<<"-------------------------------------"<<endl;
	for(int i=0;i<nb_cercle;i++){
		cercles[i].setCentreCercle(rand()%10+1,rand()%10+1);
		cercles[i].setAutreCritere(rand()%5+1,color[rand()%10]);
		cercles[i].descriptionCercle();		
	}
	cout<<endl;
	cout<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Separation des cercles se chevauchant; en utilisant les proprietes des vecteurs et d'autres calculs geometriques classiques"<<endl;	
	cout<<"Si ce deuxieme bloc n'affiche rien, les cercles generes sont deja separes depuis la generation aléatoires des cercles"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<nb_cercle;i++){
		for(int j=i+1;j<nb_cercle;j++){
			if(cercles[i].seCoupent(cercles[j])){
				cout<<"Les cercles de la ligne "<< i <<" et "<< j<<" se coupent et doivent etre separes"<<endl;
				double distanceCentre=sqrt(pow(cercles[j].getCentreCercle().getAbs()-cercles[i].getCentreCercle().getAbs(),2)+pow(cercles[j].getCentreCercle().getOrd()-cercles[i].getCentreCercle().getOrd(),2));
				double distanceDeplacement=cercles[i].getRayon()+cercles[j].getRayon()-distanceCentre;
				double deplacementX=(cercles[j].getCentreCercle().getAbs()-cercles[i].getCentreCercle().getAbs())*(distanceDeplacement/distanceCentre);
				double deplacementY=(cercles[j].getCentreCercle().getOrd()-cercles[i].getCentreCercle().getOrd())*(distanceDeplacement/distanceCentre);
				double a=cercles[j].getCentreCercle().getAbs()+deplacementX;
				double b=cercles[j].getCentreCercle().getOrd()+deplacementY;
				cercles[j].setCentreCercle(a,b);
			}	
		}
		
	}
	cout<<endl;
	cout<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"Resultats finaux avec les ajustements necessaires en cas de separation"<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	for(int i=0;i<nb_cercle;i++){
		cercles[i].descriptionCercle(cercles[i]);
	}
	return 0;
}
