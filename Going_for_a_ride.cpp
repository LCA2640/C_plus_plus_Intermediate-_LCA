//You are given a Vehicle base class, and two subclasses, Car and Bicycle.
//Both classes have a drive() method which is called in main, using Vehicle pointers.
//Complete the Vehicle class, so that it correctly represents a Vehicle abstraction.
//Remember, an abstract class should include a pure virtual function, which the derived classes must implement.

#include <iostream>
using namespace std;

class Vehicle {
    //complete the class definition
    public:
        virtual void drive () = 0;
    
};

class Car: public Vehicle {
    public:
        void drive() {
            cout << "Driving a car!"<<endl;
        }
};

class Bicycle: public Vehicle {
    public:
        void drive() {
            cout << "Driving a bicycle!"<<endl;
        }
};

int main()
{
    Car c;
    Bicycle b;
    Vehicle *v1 = &c;
    Vehicle *v2 = &b;

    v1->drive();
    v2->drive();

    return 0;
} 