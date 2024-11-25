//Your friend made a program for a robot, which makes different drinks, including tea and coffee.
//The code defines a Drink class, and separate Tea and Coffee classes. 
//It tries to create a Tea and Coffee object, set their prices with the corresponding method and call their make() method.
//However, the code does not work, as it has multiple errors.
//Find the errors in the code and fix them, so that the program runs as expected.
//Remember, to call a method with a pointer, you need to use the -> operator, whereas on an object you need to use the dot operator.

#include <iostream>
using namespace std;

class Drink {
    protected: 
        int price;
    public:
        void setPrice(int a){
            price = a;
        }
};

class Coffee : public Drink {
    public:
        void make() {
            cout << "Coffee: "<<price<<endl;
        }
};

class Tea : public Drink {
    public:
        void make() {
            cout << "Tea: "<<price<<endl;
        }
};

int main() {
    Coffee c;
    Tea t;
    Drink *e1 = &c;
    Drink *e2 = &t;

    e1->setPrice(5);
    e2->setPrice(6);

    c.make();
    t.make();
}