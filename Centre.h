#ifndef __CENTRE_H_
#define __CENTRE_H_

using namespace std;

class Centre{
	private:
		int abscisse;
		int ordonnee;
	public:
		Centre();
		void setCentre(int abs,int ord);
		int getAbs();
		int getOrd();
		~Centre();
};

#endif


