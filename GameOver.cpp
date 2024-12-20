//Derived Class Constructor & Destructor
//You are making a Quiz game. The Quiz class inherits from the Game base class. 
//Both classes have constructors, which output a Start message. 
//Create destructors for each class, which will output "Game Over" in the Game class, and "Quiz Over" in the Quiz class, so that when the program executes, it outputs:

//Game Started
//Quiz Started
//Quiz Over
//Game Over

//The derived class destructor gets executed first, before the base class destructor.

#include <iostream>
using namespace std;

class Game
{
    public:
    Game() {
        cout <<"Game Started"<<endl;
    }
    //destructor goes here
    ~Game() {
        cout <<"Game Over" <<endl;
    } 
};

class Quiz: public Game
{
    public:
    Quiz() {
        cout <<"Quiz Started"<<endl;
    }

    //destructor goes here
    ~Quiz() {
        cout <<"Quiz Over"<<endl;
    }


};

int main() {
    Quiz q;
}