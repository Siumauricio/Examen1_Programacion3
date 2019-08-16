#include "Cadena.h"
#include <cstring>
#include <iostream>
using namespace std;

Cadena::Cadena(const char*s) {
	cadena = new char[strlen(s)];
	strcpy(cadena, s);
}
Cadena::Cadena() {
		cadena = new char[1];
		cadena[0] = '\0';
}
Cadena operator+(const Cadena& ca1,const Cadena& ca2) {
	Cadena ca;
	ca = ca1.cadena+ca2;
	return ca;
}
ostream& operator<<(ostream& out, const Cadena& c) {
	out << c.cadena;
	return out;
}

bool strcmp(const Cadena& c2) {
	
	return true;
}
Cadena substr(int pos,int length) {
	Cadena cadena;
	//length = strlen(cadena);
	for (int i = 0; i < length; i++)
	{

	}

}
