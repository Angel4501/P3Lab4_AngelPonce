#include "Damas.h"
#include<iostream>
using namespace std;

Damas::Damas(){
	
}

Damas::~Damas(){
	
}

void Damas::printTablero(){
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout<<"[ "<<tablero[i][j]->toString()<<" ]";
		}
		cout<<endl;
	}
}

void Damas::prepararTablero(){//PREPARAR MATRIZ
	Pieza* pieza;
	tablero = new Casilla**[8];
	for(int i=0; i<8; i++){
		tablero[i]=new Casilla*[8];
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(i>=3 && i<=4){
				tablero[i][j]=new Casilla(NULL);
			}
			else if(i%2==0){
				if(i<3){
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(true));
					}
					else{
						//tablero[i][j]=new Casilla(new Pieza(false));
						tablero[i][j]=new Casilla(NULL);
					}
				}
				else{
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(false));
					}
					else{
						//tablero[i][j]=new Casilla(new Pieza(false));
						tablero[i][j]=new Casilla(NULL);
					}
				}	
			}
			else{
				if(i>4){
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(true));
					}
					else{
						//tablero[i][j]=new Casilla(new Pieza(false));
						tablero[i][j]=new Casilla(NULL);
					}
				}
				else{
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(false));
					}
					else{
						//tablero[i][j]=new Casilla(new Pieza(false));
						tablero[i][j]=new Casilla(NULL);
					}
				}
			}
	    }
			
	}
	/*for(int i=0; i<8; i++){
		for(int j=0; i<8; j++){
			if(i<3){
				if(i%2==0){
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(true));
					}
					else{
						pieza = NULL;
						tablero[i][j]=new Casilla(new Pieza(true));//
					}
				}
				else{
					if(j%2==0){
						pieza = NULL;
						tablero[i][j]=new Casilla(new Pieza(true));//
					}
					else{
						tablero[i][j]=new Casilla(new Pieza(true));
					}
				}
			}
			else if(i>4){
				if(i%2==0){
					if(j%2==0){
						tablero[i][j]=new Casilla(new Pieza(false));
					}
					else{
						pieza = NULL;
						tablero[i][j]=new Casilla(new Pieza(true));//
					}
				}
				else{
					if(j%2==0){
						pieza = NULL;
						tablero[i][j]=new Casilla(new Pieza(true));//
					}
					else{
						tablero[i][j]=new Casilla(new Pieza(false));
					}
				}
			}
			
		}
	}*/
}//FIN DEL METODO DE PREPARAR MATRIZ

void Damas::jugar(){
	int f,c;
	prepararTablero();
	printTablero();
	cout<<"DAMAS CHINAS"<<endl;
	cout<<"Ingrese fila: ";
	cin>>f;
	cout<<"Ingrese columna: ";
	cin>>c;
	validarmove(f,c);
	
}

bool Damas::validarmove(int x, int y){
	while(x<0 || y<0 || x>7 || y>7){
		cout<<"Fuera de rango, ingrese fila nuevamente: ";
		cin>>x;
		cout<<"Ingrese columna: ";
		cin>>y;
	}
	return true;
}

bool ganador(){
	return false;
}

