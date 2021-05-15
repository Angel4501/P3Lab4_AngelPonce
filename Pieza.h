#ifndef PIEZA_H
#define PIEZA_H
#include<string>
using std::string;

class Pieza
{
	private:
		bool bando;//blanco o negro
		bool reina;
		
		
		
	public:
		Pieza(bool);
		string toString();
		~Pieza();
	protected:
};

#endif