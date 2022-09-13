#include<string>
class Date{
	private:
		int Day;
		int Month;
		int Year;
	public:
		Date(int _day,int _month,int _year){
			
		if (_month > 12){
			_month = 1;
		}
		if (_month <= 12){
			_month = _month;
		}
		if (_day > 31){
			_day = 1;
		}
		if (_day <= 31){
			_day = _day;		
		} 	
			Day = _day;
			Month = _month;
			Year = _year;				
		}
		
		
		void setDia(int _day){
			Day = _day;
		}
		void setMes(int _month){
			
			Month = _month;
		}
		void setAno(int _year){
			Year = _year;
		}
		
		int getDia() const{
			return Day;
		}
		int getMes() const{
			return Month;
		}
		int getAno() const{
			return Year;
		}
		
		void displayDate(){
			std::cout << "\n"<< Day << "/" << Month << "/" << Year << std::endl;
		}
};