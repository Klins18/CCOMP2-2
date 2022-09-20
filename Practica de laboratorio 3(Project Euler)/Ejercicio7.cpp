#include<iostream>
using namespace std;

int main(){
    int x = 2;
    int cont=0;
    int primo;
    while(cont!=10001){
        primo=1;
        for(int i=2;i<x;++i){
            if(x%i==0){
                primo=0;
                break;
            }
        }
        if(primo==1){
            cont++;
        }
        x++;
    }
    cout<< (x-1) <<endl;
    return 0;
}