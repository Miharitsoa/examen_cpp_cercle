#ifndef __CERCLE_H_
#define __CERCLE_H_

#include <iostream>
#include <string>
#include"Centre.h"
using namespace std;

class Cercle{
	private:
		Centre O;
		int rayon;
		string couleur;
	public:
		Cercle();
		void setCentreCercle(int abs,int ord);
		void setAutreCritere(int r,string color);
		Centre getCentreCercle();
		int getRayon();
		bool seCoupent(Cercle c2);
		void descriptionCercle();
		void descriptionCercle(Cercle c);
		string getCouleur();
		~Cercle();
};

#endif
