#include "Casilla.h"
#include<iostream>
#include<string>
#include "Pieza.h"
using namespace std;
//using namespace std;

Casilla::Casilla(Pieza* _p){//Objeto de parametro, se pasa como puntero
	this -> p = _p;
}

Casilla::Casilla(){
	
}

Casilla::~Casilla(){
	
}

Pieza* Casilla::getPieza(){
	return p;
}
string Casilla::toString(){
	if(p==NULL){
		return " ";
	}
	return p->toString();
}

