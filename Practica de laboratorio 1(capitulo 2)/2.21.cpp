#include <iostream>
using namespace std;
//2.21
int main(){
	//variables:
	string c = "C";
	string p = "+";
	
	//primera fila
	cout.width(3);
	cout <<c<<c<<c;
	cout.width(4);
	cout << p;
	cout.width(7);
	cout << p << endl;
	
	//segunda fila
	cout.width(2);
	cout << c;
	cout.width(7);
	cout << p;
	cout.width(7);
	cout << p << endl;
	
	//tercera fila
	cout << c;
	cout.width(6);
	cout <<p<<p<<p<<p<<p;
	cout.width(3);
	cout <<p<<p<<p<<p<<p << endl;
	
	//cuarta fila	
	cout.width(2);
	cout << c;
	cout.width(7);
	cout << p;
	cout.width(7);
	cout << p << endl;
	
	//quinta fila
	cout.width(3);
	cout <<c<<c<<c;
	cout.width(4);
	cout << p;
	cout.width(7);
	cout << p << endl;	
	
	return 0;
}
