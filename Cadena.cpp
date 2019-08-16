#include "Cadena.h"
#include <cstring>
#include <iostream>
using namespace std;

Cadena::Cadena(const char*s) {
	cadena = new char[strlen(s)];
	strcpy(cadena,s);
}
Cadena::Cadena(void) {
		cadena = new char[1000];
		strcpy(cadena, "");
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

int Cadena:: strcmp(const Cadena& c2) {
	for (int i = 0; i < longitud; i++)
	{
		if (cadena[i]!=c2.cadena[i])
		{
			if (cadena[i]<c2.cadena[i])
			{
				return -1;
			}
			else {
				return 1;
			}
		}
		return 0;
	}
}
Cadena Cadena::substr(int pos,int length) {
	int x = 0;

	Cadena cadena;
	cadena.longitud = length;
	for (int i = pos; i <  length; i++)
	{
		x++;
		cadena.cadena[x] = cadena[i];
	}

	return cadena;
}

