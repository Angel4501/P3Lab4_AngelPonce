#include "Pieza.h"

Pieza::Pieza(bool _bando){
	this -> bando = _bando;
	this -> reina = false;
}

Pieza::~Pieza(){
	
}

string Pieza::toString(){
	if(bando){
		return "O";
	}
	return "X";
}