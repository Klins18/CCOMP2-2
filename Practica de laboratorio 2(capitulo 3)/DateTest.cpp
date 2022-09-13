#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date Fecha1(12,1,2023);
    Date Fecha2(35,14,1995);
    
	cout << "Fecha1:";
	Fecha1.displayDate();
	
    cout << "\n\nFecha2:";
    Fecha2.displayDate();
    return 0;
}