#ifndef DAMAS_H
#define DAMAS_H

#include "Casilla.h"
#include "Pieza.h"

class Damas
{
	private:
		Casilla*** tablero;
		
	public:
		Damas();
		~Damas();
		void prepararTablero();
		void printTablero();
		void jugar();
		bool validarmove(int,int);
		bool ganador();
		//Casilla
		//Casilla preparar();
	protected:
};

#endif