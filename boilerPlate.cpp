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

int main()
{
    IVehicle* myCar = new Car() ;
    IVehicle* myTruck =  new Truck() ;
    
    myCar->start() ;
    myTruck->start() ;
    
    
    return 0 ;
}
