#include <iostream>
using namespace std;

bool palindromo(int n){
    int aux,resto,invert=0;
    bool isPal;

    aux=n;
    while(aux>0){
        resto = aux%10;
        aux = aux/10;
        invert = invert*10+resto;
    }
    if(invert==n){
        isPal = true;
        return isPal;
    }else{
        isPal = false;
        return isPal;
    }
}


int main(){
    int palinMax,producto;
    palinMax = 0;
    for(int i = 100; i<1000 ;i++){
        for(int j = 100; j <1000; j++){
            producto = i*j;
            if((palindromo(producto) == true) &&(producto > palinMax)){
                palinMax = producto;
            }
        }
    }
    cout << palinMax << endl;
    return 0;
}