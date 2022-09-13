#include <string>

class MotorVehicle{
    private:
        std::string make;
        std::string fuellType;
        int yearOfManufacture;
        std::string color;
        int engineCapacity;

    public:
        MotorVehicle(std::string _make,std::string _fuellType,std::string _color,int _YearOfManufacture,int _EngineCapacity)
        {
            make = _make;
            fuellType = _fuellType;
            color = _color;
            yearOfManufacture = _YearOfManufacture;
            engineCapacity = _EngineCapacity;
        } 
        std::string getMake() const{
            return make;
        }
        std::string getFuellType() const{
            return fuellType;
        }
        std::string getColor() const{
            return color;
        } 
        int getYearOfManufacture() const{
            return yearOfManufacture;
        }
        int getEngineCapacity() const{
            return engineCapacity;
        }
        void setMake(std::string _make){
            make = _make;
        }
        void setFuellType(std::string _fuellType){
            fuellType = _fuellType;
        }
        void setColor(std::string _color){
            color = _color;
        } 
        void setYearOfManufacture(int _YearOfManufacture){
            yearOfManufacture = _YearOfManufacture;
        }
        void setEngineCapacity(int _EngineCapacity){
            engineCapacity = _EngineCapacity;
        }
        void displayCarDetails(){
            std::cout << "\nMake: " << make;
            std::cout << "\nFuell Type: " << fuellType;
            std::cout << "\nColor: " << color;
            std::cout << "\nYear of Manufacture: " << yearOfManufacture;
            std::cout << "\nEngine Capacity: " << engineCapacity;
        }
};