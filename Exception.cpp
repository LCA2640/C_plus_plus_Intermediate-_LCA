//You are making a digital menu, which takes a number as user input, and outputs the corresponding menu item.
//However, the users can input anything, even numbers that are not present in the menu.
//Handle wrong user input, by throwing an exception with code 404 and outputting "404 - not found", if it is out of the range of the given menu.
//Note that the menu is given as an array, so you need to output the item corresponding to the input index, if it exists.

#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    int s = sizeof(menu);

    try {
        int x;
        cin >> x;
        //your code goes here

        if ( x<0 || x >= s ){
            throw 404;
        }

        else{
            cout << menu[x];
        }
        
    }
    catch(int x) {
        //and here
        cout <<  "404 - not found";
        
    }
}