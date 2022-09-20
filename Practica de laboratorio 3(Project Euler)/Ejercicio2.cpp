#include <iostream>
using namespace std;

int main(){
    int sum,n,m;
    sum = 0;
    n = 1;
    m = 2;

    while(n < 4000000){
        if(n%2==0){
            sum+=n;
        }
        int x = n+m;
        n=m;
        m=x;
    }
    cout << sum << endl;
    return 0;
}
