#include <iostream>
using namespace std;
//2.20
int main(){
	int radio;
	int diametro;
	float circunf;
	float area;
	const float pi = 3.14159;
	
	cout << "Ingrese el radio: ";
	cin >> radio;
	
	diametro = radio*2;
	cout << "El diametro del circulo es: " << diametro << endl;
	
	circunf = pi * diametro;
	cout << "La circunferencia del circulo es: "<< circunf << endl;
	
	area = pi*(radio*radio);
	cout << "El radio del circulo es: " << area << endl;
	
	return 0;
}

