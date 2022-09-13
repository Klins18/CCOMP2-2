#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	Account account1("Jane Green",700);
	Account account2("John Blue",-2);
	
	cout << "account1: " << account1.getName() << "Balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "Balance is $" << account2.getBalance();
	
	cout << "\n\nEnter withdraw amount for account 1: $";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "withdrawing " << withdrawAmount << " to account1 Balance";
	account1.withdraw(withdrawAmount);
	cout << "\n\naccount1: "<< account1.getName()<< "Balance is $"<< account1.getBalance();
	
	cout << "\naccount2: "<< account2.getName()<< "Balance is $"<< account2.getBalance();
	cout << "\n\nEnter withdraw amount for account 2: $";
	cin >> withdrawAmount;
	cout << "withdrawing " << withdrawAmount <<  " to account2 Balance";
	account2.withdraw(withdrawAmount); 
	cout << "\n\naccount1: "<< account1.getName()<< "Balance is $"<< account1.getBalance();
	cout << "\naccount2: "<< account2.getName()<< "Balance is $"<< account2.getBalance() <<endl;
	
	return 0;
}