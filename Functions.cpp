//You need to write a function, which returns the maximum of its two parameters, and it should work for different data types (integers, doubles, etc.)
//Create a function template called myMax(), which takes two parameters and returns the larger one, so that the code in main works as expected.
//Sample Input   
//4.2
//8.1
//Sample Output 
//8.1

//Remember, the syntax for declaring a template function is template <class T>

#include <iostream>
using namespace std;

//your code goes here

template <class T>
T myMax(T e, T f){

    if (e > f){
        return e;
    }
    else {
        return f;
    }

}


int main () {
    double x, y;
    cin>>x>>y;
    int a, b;
    cin>>a>>b;
    cout << myMax(x, y) << endl;
    cout << myMax(a, b) << endl;
}