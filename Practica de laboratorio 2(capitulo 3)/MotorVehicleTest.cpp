#include<iostream>
#include "MotorVehicle.h"
using namespace std;

int main(){
    MotorVehicle auto1("Toyota","Diesel","Rojo",2023,1200);
    MotorVehicle auto2("Nissan","Gasolina","Verde",2021,1300);
    
	cout << "Auto1:";
	auto1.displayCarDetails();
	
    cout << "\n\nAuto2:";
    auto2.displayCarDetails();
    return 0;
}