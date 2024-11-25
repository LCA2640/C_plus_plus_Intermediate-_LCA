//Exceptions
//You are making a program to manage user names.
//A valid username needs to be minimum 4, maximum 20 characters long.
//Create a program to take a string as input, check its length and output "Valid" if the name is valid, or "Invalid", if it is not.
//You can check the length of the input string using the size() function and throw an exception, if it is not valid.

#include <iostream> 
using namespace std; 

int main() { 
    string name; 
    cin >> name; 
    
    try { 
        if(name.size()<4 || name.size()>20) {
            throw 99 ;
        }

        else{
            cout<< "Valid";
        } 
        
    }
        
    catch (int x ) { 
            cout<< "Invalid"; 
    } 
    
    
    return 0;     

}
