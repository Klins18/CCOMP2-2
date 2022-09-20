#include<iostream>
using namespace std;

unsigned long long MCD(unsigned long long a, unsigned long long b){
    while(a != 0){
        unsigned long long c = a;
        a = b%a;
        b = c;
    } return b;
}

unsigned long long mcm(unsigned long long a, unsigned long long b){
    return a *(b/MCD(a,b));
}

int main(){
    unsigned long long result;
    
    for (unsigned int i=1; i<=20; i++){
        result = mcm(result,i);
    }

    cout << result <<endl;
    return 0;
}

