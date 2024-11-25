//You are given a Div class template, which has a constructor that takes two parameters and outputs their division.
//You need to specialize the class for strings, which should output the division of the lengths of the parameter strings, as the division operator is not defined for strings.
//Create the template specialization so that the code in main executes correctly.
//You can get the length of a string using the size() function.

#include <iostream>
using namespace std;

template <class T>
class Div {
    public:
        Div (T x, T y) {
            cout <<x / y<<endl;
        }
};

template <>
class Div <string>{
    public:
        Div (string x, string y){
            cout <<(x.size() / y.size())<<endl;
        }
};

//your code goes here


int main () {
    string a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    
    Div <string> d2(a, b);
    Div <int> d1(x, y);
    
}