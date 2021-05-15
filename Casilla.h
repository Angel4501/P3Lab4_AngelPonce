#ifndef CASILLA_H
#define CASILLA_H
#include<string>
#include "Pieza.h"

using std::string;

class Casilla{	
	private:
		Pieza* p;
		
	public:
		string toString();
		Casilla(Pieza*);
		Casilla();
		Pieza* getPieza();
		~Casilla();
	protected:
};

#endif