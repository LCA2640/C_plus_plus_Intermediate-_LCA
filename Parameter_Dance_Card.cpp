//We have successfully created a myMax() function template, which returns the larger one of its parameters.
//However, it only works if the parameters have the same type.
//Modify the given code to enable the function to work with different parameter types (the function is called with different data types in main).
//The result of the myMax() function should be of the type of its first parameter.

#include <iostream>
using namespace std;

//change the function
template <class T, class U>
T myMax(T a, U b) {
    return (a > b ? a : b);
}

int main () {
    double x;
    int y;
    cin>>x>>y;
    cout << myMax(x, y) << endl;
}