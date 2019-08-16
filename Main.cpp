#include <iostream>
#include "Cadena.h"
using namespace std;

int main() {
	Cadena ca1("a");
	Cadena ca2;
	Cadena ca3("Mundo");
	ca2 = ca1 + ca3;

	cout << "ca1" << ca1 << "ca3:" << ca3 << endl;

	return 0;
}
