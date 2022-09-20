#include <iostream>
using namespace std;

int main(){
    unsigned int x = 13195;
    //unsigned long long x = 600851475143;
    bool primo;
    int primomax;

    for(int i=2; i < x; i++){		
        primo = true;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                primo = false;
            }
        }
        if((primo = true) && (x%i == 0)){
            primomax = i;
            x = x/i;
            cout << i << endl;
            cout << "========================"<<endl;
            cout << x << endl;
            cout <<"---------------------------"<<endl;
            
        }
    }

cout << x << endl;
    return 0;
}