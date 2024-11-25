//You work at a grocery store and want to build an app to manage the products in the store.
//You make a Product base class and separate classes for each product type.
//Inherit the Fruit class from Product and make sure the given code works correctly.
//The code tries to access the private members of Product in the Fruit class. Fix it by applying the correct access specifier.

#include <iostream>
using namespace std;

class Product
{
    protected:
        double price;
        int weight;
    public:
        void info() {
            cout <<price<<", "<<weight;
        }
};

class Fruit : public Product
{
    public:
        string type;
        void setInfo(double p, int w) {
            price = p;
            weight = w;
        }
};

int main() {
    Fruit obj;
    obj.type = "Apple";
    obj.setInfo(4.99, 10);
    obj.info();
}