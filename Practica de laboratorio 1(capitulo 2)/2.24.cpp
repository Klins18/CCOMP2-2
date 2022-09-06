#include <iostream>
using namespace std;

int main(){
	int num1,num2,sum;
	
	cout << "Ingrese dos numeros: " <<endl;
	cin >>num1>>num2;
	
	sum = num1 + num2;
	
	if (num1%2==0){
		cout << num1 <<" es un numero par"<<endl;
	}
	else{
		cout << num1 <<" es un numero impar"<<endl;
	} 
	
	if (num2%2==0){
		cout << num2 <<" es un numero par"<<endl;
	}
	else{
		cout << num2 <<" es un numero impar"<<endl;
	} 
	
	if (sum%2==0){
		cout << "La suma de los numeros: " << num1 <<"+"<<num2<<"="<<sum<<" es un numero par"<<endl;
	}
	else{
		cout << "La suma de los numeros: " << num1 <<"+"<<num2<<"="<<sum<<" es un numero impar"<<endl;
	}
	return 0;
}
