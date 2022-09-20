#include<iostream>
using namespace std;

int main(){
    int sum1,sum2,expo,resta;
    sum1 = 0;
    sum2 = 0;
    for(int i=1;i<=100;i++){
        sum1 = (sum1 + (i*i));
    }
    cout << sum1 << endl;

    for(int j=1; j<=100;j++){
        sum2 = (sum2+j);
    }
    expo = (sum2*sum2);
    cout << expo << endl;

    cout << expo << "-" << sum1 <<"="<< (resta=expo-sum1)<< endl;
    return 0;
}