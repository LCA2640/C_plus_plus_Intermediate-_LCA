//Inheritance
//You are making a drawing application. The code you are given declares a Shape base class, and you are making separate classes for each shape that your application is going to support. 
//Inherit the Rectangle class from the Shape class and call its draw() method. 
//Inherit using a colon and an access specifier.

#include <iostream>
using namespace std;

class Shape
{
    public:
        void draw() {
            cout << "Drawing...";
        }
};
//inherit from Shape
class Rectangle : public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {
            cout <<w<<"x"<<h<<endl;
        };
};

int main() {
    int x, y;
    cin>>x>>y;
    Rectangle d(x, y);
    //call the draw() method
    d.draw();
    
}