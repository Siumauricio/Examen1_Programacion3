#pragma once
#include <iostream>
using namespace std;
#ifndef Cadena_H
#define Cadena_H
#endif
//strcmpy compara 2 cadenas
class Cadena {
public:
	Cadena(const char*);
	Cadena(void);
	friend Cadena operator +(const Cadena& ca1, const Cadena& ca2);
	friend ostream& operator<<(ostream& out, const Cadena& c);
	int strcmp(const Cadena& c1);
	Cadena substr(int pos,int length);

private:
	char* cadena;
	int longitud;

};
