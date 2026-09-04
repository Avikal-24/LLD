#include<bits/stdc++.h>
using namespace std;

// interface
class IVehicle
{
    public:
        virtual ~IVehicle() = default ; // IMP destructor
        virtual void start() = 0 ; // a pure virtual function
    
};

class Car : public IVehicle
{
    public:
        Car(){} ; // IMP default constructor
        void start() override
        {
            cout<<"starting a car" ;
        }
};

class Truck : public IVehicle
{
    public:
        Truck(){} ; // IMP default constructor
        void start() override
        {
            cout<<"starting a truck" ;
        }
};

class VehicleFactory
{
    public:
        static IVehicle* getVehicle(string vehicleType)
        {
            if(vehicleType == "Car") return new Car() ;
            else if(vehicleType == "Truck") return new Truck() ;
            
            cout<<"ERROR" ;
            return nullptr ;
        }
};

int main()
{
    // IMP way to access a static function
    IVehicle* myCar = VehicleFactory::getVehicle("Car") ;
    IVehicle* myTruck =  VehicleFactory::getVehicle("Truck") ;
    
    myCar->start() ;
    myTruck->start() ;
    
    
    return 0 ;
}
