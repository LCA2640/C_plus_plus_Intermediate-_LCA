//You are making a program to manage an animal zoo. 
//You have a base class Animal, and two subclasses: Dog and Cat. 
//In main, you have an array of Animal pointers, where each pointer can hold a Dog or a Cat. 
//The code loops through the array and calls the speak() method of the object, irrespective of its type. 
//Complete the code by adding the speak() method to the Animal class, so that the code works and the corresponding methods get called correctly.

#include <iostream>
using namespace std;

class Animal
{
    public:
        string name;

        //your code goes here

        virtual void speak(){
            
        }
    
    
};
class Dog: public Animal
{
    public:
        void speak() {
            cout <<"Woof!"<<endl;
        }
};
class Cat: public Animal
{
    public:
        void speak() {
            cout <<"Meaw!"<<endl;
        }
};

int main() {
    Cat c1;
    c1.name = "Fluffy";
    Dog d1;
    d1.name = "Bingo";
    
    Animal *a1 = &c1;
    Animal *a2 = &d1;
    
    Animal* arr[] = {a1, a2}; 
    for(int i=0;i<2;i++){
        arr[i]->speak();
    }
}