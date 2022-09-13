#include<string>

class Account{
	public:
		Account(std::string accountName,int initialBalance): name{accountName} {
		if (initialBalance > 0){
			balance = initialBalance;
			}	 
		}
		void withdraw(int withdrawAmount){
			if (withdrawAmount > 0){
				
				if(balance > withdrawAmount) {
					balance = balance - withdrawAmount;
				}
				if(balance <= 0){
					std::cout<< "\n...ATENCION!!...\nNo cuenta con saldo suficiente para realizar esta operacion. "	;
				}
			}
		}
		
		int getBalance() const{
			return balance;
		}
		
		void setName(std::string accountName){
			name = accountName;
		}
		
		std::string getName() const{
			return name;
		}
	private:
		std::string name;
		int balance{0};	
};