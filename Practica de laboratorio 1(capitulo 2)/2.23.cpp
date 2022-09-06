#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3,num4,num5;
	int max1,max2;
	int min1,min2;

	cout << "Ingrese cinco numeros : "<<endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	if (num1>num2 && num1>num3 && num1>num4 && num1>num5){
		max1 = num1;
		if(num2>num3 && num2>num4 && num2>num5){
			max2 = num2;
		}
		else if(num3>num2 && num3>num4 && num3>num5){
			max2 = num3;
		}
		else if(num4>num2 && num4>num3 && num4>num5){
			max2 = num4;
		}
		else{
			max2 = num5;
		}
	}
	else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){
		max1 = num2;
		if(num1>num3 && num1>num4 && num1>num5){
			max2 = num1;
		}
		else if(num3>num1 && num3>num4 && num3>num5){
			max2 = num3;
		}
		else if(num4>num1 && num4>num3 && num4>num5){
			max2 = num4;
		}
		else{
			max2 = num5;
		}
	}
	else if(num3>num1 && num3>num2 && num3>num4 && num3>num5){
		max1 = num3;
		if(num1>num2 && num1>num4 && num1>num5){
			max2 = num1;
		}
		else if(num2>num1 && num2>num4 && num2>num5){
			max2 = num2;
		}
		else if(num4>num1 && num4>num2 && num4>num5){
			max2 = num4;
		}
		else{
			max2 = num5;
		}
	}
	else if(num4>num1 && num4>num2 && num4>num3 && num4>num5){
		max1 = num4;
		if(num1>num2 && num1>num3 && num1>num5){
			max2 = num1;
		}
		else if(num2>num1 && num2>num3 && num2>num5){
			max2 = num2;
		}
		else if(num3>num1 && num3>num2 && num3>num5){
			max2 = num3;
		}
		else{
			max2 = num5;
		}
	}
	else{
		max1 = num5;
		if(num1>num2 && num1>num3 && num1>num4){
			max2 = num1;
		}
		else if(num2>num1 && num2>num3 && num2>num4){
			max2 = num2;
		}
		else if(num3>num1 && num3>num2 && num3>num4){
			max2 = num3;
		}
		else{
			max2 = num4;
		}
	}
	
	//Valores menores
	
	if (num1<num2 && num1<num3 && num1<num4 && num1<num5){
		min1 = num1;
		if(num2<num3 && num2<num4 && num2<num5){
			min2 = num2;
		}
		else if(num3<num2 && num3<num4 && num3<num5){
			min2 = num3;
		}
		else if(num4<num2 && num4<num3 && num4<num5){
			min2 = num4;
		}
		else{
			min2 = num5;
		}
	}
	else if(num2<num1 && num2<num3 && num2<num4 && num2<num5){
		min1 = num2;
		if(num1<num3 && num1<num4 && num1<num5){
			min2 = num1;
		}
		else if(num3<num1 && num3<num4 && num3<num5){
			min2 = num3;
		}
		else if(num4<num1 && num4<num3 && num4<num5){
			min2 = num4;
		}
		else{
			min2 = num5;
		}
	}
	else if(num3<num1 && num3<num2 && num3<num4 && num3<num5){
		min1 = num3;
		if(num1<num2 && num1<num4 && num1<num5){
			min2 = num1;
		}
		else if(num2<num1 && num2<num4 && num2<num5){
			min2 = num2;
		}
		else if(num4<num1 && num4<num2 && num4<num5){
			min2 = num4;
		}
		else{
			min2 = num5;
		}
	}
	else if(num4<num1 && num4<num2 && num4<num3 && num4<num5){
		min1 = num4;
		if(num1<num2 && num1<num3 && num1<num5){
			min2 = num1;
		}
		else if(num2<num1 && num2<num3 && num2<num5){
			min2 = num2;
		}
		else if(num3<num1 && num3<num2 && num3<num5){
			min2 = num3;
		}
		else{
			min2 = num5;
		}
	}
	else{
		min1 = num5;
		if(num1<num2 && num1<num3 && num1<num4){
			min2 = num1;
		}
		else if(num2<num1 && num2<num3 && num2<num4){
			min2 = num2;
		}
		else if(num3<num1 && num3<num2 && num3<num4){
			min2 = num3;
		}
		else{
			min2 = num4;
		}
	}
	
	cout << "Los numeros mayores Son: " << max1 << " y " << max2 << endl;
	cout << "Los numeros menores Son: " << min1 << " y " << min2 << endl;
	return 0;
}
